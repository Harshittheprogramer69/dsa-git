using System;

namespace Add
{
    class WORK
    {
        static void Main()
        {
 
            Console.Write("Enter first number: ");
            int first =  int.Parse(Console.ReadLine()!);

            Console.Write("Enter second number: ");
            int second = int.Parse(Console.ReadLine()!);

            int sum = first + second;

            System.Console.WriteLine($"Sum is {sum}");
        }
    }
}