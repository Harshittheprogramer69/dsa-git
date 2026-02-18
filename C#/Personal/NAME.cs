using System;

namespace Personal
{
    class Print_name
    {
        static void Main()
        {
            Console.Write("Enter your Name: ");
            string name = (Console.ReadLine()!);

            Console.WriteLine($"Welcome {name}");
        }
    }
}