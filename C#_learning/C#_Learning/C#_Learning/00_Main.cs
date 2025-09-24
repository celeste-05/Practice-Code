//using System;

//// 1. 状态枚举
//public enum State { Idle, Running, Paused, Error }

//// 2. 设备相关类（简化）
//public class OssEquipment { }

//public class Gem300Equipment : OssEquipment
//{
//    // 设备控制状态（假设在父类中定义）
//    public int ControlState { get; set; } // 实际可能存储枚举值的整数形式
//}

//public class KingSEMIGem300Equipment : Gem300Equipment
//{
//    // 饿汉式单例
//    public static KingSEMIGem300Equipment Ins = new KingSEMIGem300Equipment();

//    // 构造函数：初始化状态（示例）
//    private KingSEMIGem300Equipment()
//    {
//        ControlState = (int)State.Running; // 假设初始状态为运行中
//    }
//}

//// 3. 包含CurrentState的类
//public class DeviceMonitor
//{
//    // 单例变量
//    public static Gem300Equipment KingSEMIGem300 = KingSEMIGem300Equipment.Ins;

//    // 静态属性：获取当前状态
//    public static State CurrentState
//    {
//        get { return (State)KingSEMIGem300.ControlState; }
//    }
//}

//public class DeviceMonitor1
//{
//    // 单例变量
//    public static Gem300Equipment KingSEMIGem300 = KingSEMIGem300Equipment.Ins;

//    // 静态属性：获取当前状态
//    public static State CurrentState
//    {
//        get { return (State)KingSEMIGem300.ControlState; }
//    }
//}

//// 4. 主程序调用
//public class Program
//{
//    public static void Main()
//    {
//        // 正确调用：通过类名访问静态属性CurrentState
//        State current = DeviceMonitor.CurrentState;
//        State current1 = DeviceMonitor1.CurrentState;
//        Console.WriteLine("当前设备状态：" + current); // 输出：当前设备状态：Running
//        Console.WriteLine("当前设备1状态：" + current1); // 输出：当前设备状态：Running

//        // 直接在Console.WriteLine中使用
//        Console.WriteLine("设备状态更新：" + DeviceMonitor.CurrentState);
//        Console.WriteLine("设备1状态更新：" + DeviceMonitor1.CurrentState);
//    }
//}