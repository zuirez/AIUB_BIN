/*using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OutputPractice1
{
    public class A
    {
        internal int num = 15;
    }

    public class B : A
    {
        protected internal int val = 30;
    }

    public class Alpha
    {
        protected static string data = "start";
        protected Alpha()
        {
            data += "alpha";
        }
    }

    class SubAlpha : Alpha
    {
        public SubAlpha()
        {
            data += "subalpha";
        }

        public void ShowData()
        {
            Console.WriteLine(data);
        }
    }

    public class SubSubAlpha : Alpha
    {
        public SubSubAlpha()
        {
            data += "subsubalpha";
        }
        
        public static void DisplayNum(A objA)
        {
            Console.WriteLine(objA.num);
        }

        public static void DisplayVal(B objB)
        {
            Console.WriteLine(objB.val);
        }

        public static void Main(string[] args)
        {
            A objA = new A();
            objA.num = 40;
            B objB = new B();
            objB.val = 50;
            DisplayNum(objA);
            DisplayNum(objB);
            DisplayVal(objB);

            Console.WriteLine(data);
            Console.WriteLine("Determine:");

            data = "Reset";
            new SubSubAlpha();
            Console.WriteLine(data);

            Console.WriteLine("Final data = "+data);
            Console.WriteLine("Final num = " + objA.num);
        }
    }
}
*/