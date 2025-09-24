//using System;
//using System.Collections.Generic;

//class Calculator
//{
//    // 定义委托类型，对应接收两个double参数并返回double的方法
//    private delegate double OperationDelegate(double a, double b);

//    // 创建字典存储运算符与对应运算方法的映射
//    private static Dictionary<char, OperationDelegate> operationMap;

//    static Calculator()
//    {
//        // 初始化字典，建立运算符与方法的映射关系
//        operationMap = new Dictionary<char, OperationDelegate>
//        {
//            { '+', Add },
//            { '-', Subtract },
//            { '*', Multiply },
//            { '/', Divide }
//        };
//    }

//    // 加法运算
//    private static double Add(double a, double b)
//    {
//        return a + b;
//    }

//    // 减法运算
//    private static double Subtract(double a, double b)
//    {
//        return a - b;
//    }

//    // 乘法运算
//    private static double Multiply(double a, double b)
//    {
//        return a * b;
//    }

//    // 除法运算
//    private static double Divide(double a, double b)
//    {
//        if (b == 0)
//        {
//            Console.WriteLine("错误！除数不能为零！");
//            return 0;
//        }
//        return a / b;
//    }

//    static void Main(string[] args)
//    {
//        Console.WriteLine("请输入两个操作数和运算符(格式：a b +,-,*,/)：");
//        string input = Console.ReadLine();
//        if (input == null)
//        {
//            Console.WriteLine("输入无效！");
//            return;
//        }

//        // 解析输入
//        string[] parts = input.Split(new[] { ' ' }, StringSplitOptions.RemoveEmptyEntries);
//        if (parts.Length != 3)
//        {
//            Console.WriteLine("输入格式错误！请按照指定格式输入。");
//            return;
//        }

//        // 转换操作数
//        if (!double.TryParse(parts[0], out double num1) || !double.TryParse(parts[1], out double num2))
//        {
//            Console.WriteLine("操作数必须是数字！");
//            return;
//        }

//        char op = parts[2][0]; // 获取运算符

//        // 查找对应的运算方法
//        if (operationMap.TryGetValue(op, out OperationDelegate operation))
//        {
//            double result = operation(num1, num2);
//            // 避免在除法出错时显示错误的结果
//            if (!(op == '/' && num2 == 0))
//            {
//                Console.WriteLine($"{num1} {op} {num2} = {result}");
//            }
//        }
//        else
//        {
//            Console.WriteLine("错误！无效的运算符！");
//        }

//        Console.WriteLine("按任意键退出...");
//        Console.ReadKey();
//    }
//}
