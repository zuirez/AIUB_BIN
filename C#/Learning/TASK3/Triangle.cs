/*using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TASK3
{
    internal class Triangle
    {
        private int x;
        private int y;
        private int z;

        public Triangle(int x, int y, int z)
        {
            this.x = x;
            this.y = y;
            this.z = z;
        }

        public int X
        {
            get { return x; }
            set { x = value; }
        }

        public int Y
        {
            get { return y; }
            set { y = value; }
        }

        public int Z
        {
            get { return z; }
            set { z = value; }
        }

        public void TestTriangle()
        {
            if (x == y && y == z)
            {
                Console.WriteLine("This is an equilateral triangle.");
            }
            else if (x == y || y == z || x == z)
            {
                Console.WriteLine("This is an isosceles triangle.");
            }
            else
            {
                Console.WriteLine("This is a scalene triangle.");
            }
        }

        public void ShowInfo()
        {
            Console.WriteLine("X: " + x);
            Console.WriteLine("Y: " + y);
            Console.WriteLine("Z: " + z);
            TestTriangle();
        }
    }
}
*/