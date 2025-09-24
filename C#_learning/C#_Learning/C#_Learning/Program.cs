//using System;

//namespace C__Learning
//{
//    public class Person
//    {
//        public string Name { get; set; }
//        public int Age { get; set; }

//        // 提供公共方法供外部调用，间接修改 Age
//        public void SetAge(int newAge)
//        {
//            // 还可以在此处添加校验逻辑（如年龄不能为负数）
//            if (newAge >= 0)
//            {
//                Age = newAge; // 类内部可以访问 private set，赋值有效
//            }
//        }
//    }
//    public class test
//    {
//        static void Main(string[] args)
//        {
//            Person person = new Person();
//            person.Name = "张三";
//            person.Age = 18;
//            Console.WriteLine(person.Name);
//            Console.WriteLine(person.Age);

//            //Person person1 = new Person{Name = "李四", Age = 20 };
//            Person person1 = new Person { Age = 20, Name = "李四" };
//            Console.WriteLine(person1.Name);
//            Console.WriteLine(person1.Age);
//        }
//    }
//}




