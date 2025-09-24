using System;
using first_space;
using second_space;
using Space_03;

namespace first_space
{
    class Class_01
    {
        public void func()
        {
            Console.WriteLine("Inside space01");
        }
    }
}

namespace second_space
{
    class Class_02
    {
        public void func()
        {
            Console.WriteLine("Inside space02");
        }
    }
}

class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("Hello, World!");

        Class_01 c1 = new();
        c1.func();

        Class_02 c2 = new();
        c2.func();

        Class_03 c3 = new();
        c3.func();
    }
}
