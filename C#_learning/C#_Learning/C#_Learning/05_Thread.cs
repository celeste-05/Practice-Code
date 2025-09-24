using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Threading;

namespace MultithreadingApplication
{
    class Program
    {
        // 共享资源：计数器
        private static int _counter = 0;

        // 用于同步的锁对象
        private static readonly object _lockObj = new object();

        // 用于线程间通信的信号
        private static bool _shouldStop = false;

        static void Main(string[] args)
        {
            Console.WriteLine("主线程启动，ID:" + Thread.CurrentThread.ManagedThreadId);

            // 创建两个工作线程
            // 线程1：执行递增计数器的任务
            Thread thread1 = new Thread(IncrementCounter);
            thread1.Name = "计数器线程";

            // 线程2：执行打印消息的任务
            Thread thread2 = new Thread(PrintMessages);
            thread2.Name = "消息打印线程";

            // 启动线程
            Console.WriteLine("启动工作线程...");
            thread1.Start();
            thread2.Start();

            // 主线程等待5秒，让工作线程运行一段时间
            Thread.Sleep(5000);

            // 发送停止信号给工作线程
            Console.WriteLine("主线程发出停止信号");
            _shouldStop = true;

            // 等待所有工作线程完成
            thread1.Join(); // 等待线程1结束
            thread2.Join(); // 等待线程2结束

            Console.WriteLine($"所有工作线程已结束，最终计数器值：{_counter}");
            Console.WriteLine("主线程结束");
            Console.WriteLine("Press any key to quit!");
            Console.ReadKey();
        }

        /// <summary>
        /// 线程1执行的方法：递增计数器
        /// </summary>
        static void IncrementCounter()
        {
            Console.WriteLine($"{Thread.CurrentThread.Name} 启动，ID:{Thread.CurrentThread.ManagedThreadId}");

            // 循环执行，直到收到停止信号
            while (!_shouldStop)
            {
                // 使用lock确保对共享资源的原子操作
                // 防止多个线程同时修改导致数据不一致
                lock (_lockObj)
                {
                    _counter++;
                    Console.WriteLine($"{Thread.CurrentThread.Name}:计数器值 = {_counter}");
                }

                // 让线程休眠100毫秒，模拟其他操作
                Thread.Sleep(100);
            }

            Console.WriteLine($"{Thread.CurrentThread.Name} 结束");
        }

        /// <summary>
        /// 线程2执行的方法：打印消息
        /// </summary>
        static void PrintMessages()
        {
            Console.WriteLine($"{Thread.CurrentThread.Name} 启动，ID: {Thread.CurrentThread.ManagedThreadId}");
            int messageCount = 0;

            // 循环执行，直到收到停止信号
            while (!_shouldStop)
            {
                messageCount++;
                Console.WriteLine($"{Thread.CurrentThread.Name}: 这是第 {messageCount} 条消息");

                // 让线程休眠200毫秒
                Thread.Sleep(200);
            }

            Console.WriteLine($"{Thread.CurrentThread.Name} 结束");
        }
    }
}
