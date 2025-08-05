using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem1
{
    internal class Problem1
    {
        static void Main(string[] args)
        {
            Laborer laborer1 = new Laborer();
            Laborer laborer2 = new Laborer("L2", "Mokles", "Dhaka", 69, 20);
            Laborer laborer3 = new Laborer("L3", "Akkas", "Barishal", 90,  9);
            Laborer laborer4 = new Laborer("L4", "Bablu", "Sylhet", 70, 10);
            Laborer laborer5 = new Laborer("L5", "Montu", "Khulna", 71, 11);

            Console.WriteLine("Laborer 1 Information:");
            laborer1.ShowInfo();
            Console.WriteLine("\nLaborer 2 Information:");
            laborer2.ShowInfo();
            Console.WriteLine("\nLaborer 3 Information:");
            laborer3.ShowInfo();
            Console.WriteLine("\nLaborer 4 Information:");
            laborer4.ShowInfo();
            Console.WriteLine("\nLaborer 5 Information:");
            laborer5.ShowInfo();

            Console.WriteLine("\n\n-----------------------------------\n\n");

            Manager manager1 = new Manager();
            Manager manager2 = new Manager("M1", "Rasel", "Dhaka", 3);
            Manager manager3 = new Manager("M2", "Rifat", "Chittagong", 2);
            Manager manager4 = new Manager("M3", "Sabbir", "Rajshahi", 1);

            Console.WriteLine("\nManager 1 Information:");
            manager1.ShowInfo();
            Console.WriteLine("\nManager 2 Information:");
            manager2.ShowInfo();
            Console.WriteLine("\nManager 3 Information:");
            manager3.ShowInfo();
            Console.WriteLine("\nManager 4 Information:");
            manager4.ShowInfo();
        }
    }
}
