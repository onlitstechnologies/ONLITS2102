using System;
class NaturalNumbers
{
    static void Main()
    {
        int n;
        Console.Write("Enter a number: ");
        n = Int32.Parse(Console.ReadLine());

        for (int i = 1; i <= n; i++)
        {
            Console.Write(i + " ");
        }
        Console.WriteLine();
    }
}