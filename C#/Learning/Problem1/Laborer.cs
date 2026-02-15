/*using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem1
{
    internal class Laborer : Employee
    {
        protected int userRating;
        protected int chargePerService = 500;
        protected int noOfServices;

        public Laborer()
        {
            Console.WriteLine("Laborer class empty constructor called.");
        }

        public Laborer(string id, string name, string address, int userRating, int noOfServices) : base(id, name, address)
        {
            Console.WriteLine("Laborer class parameterized constructor called.");
            this.userRating = userRating;
            this.noOfServices = noOfServices;
        }

        public override void EmployeeStatus()
        {
            if (userRating > 70 && this.noOfServices >= 10)
            {
                Console.WriteLine("Employee (Laborer) is eligible for bonus.");
            }
            else
            {
                Console.WriteLine("Employee (Laborer) is not eligible for bonus.");
            }
        }

        public void ShowInfo()
        {
            base.ShowInfo();
            Console.WriteLine("User Rating : " + this.userRating);
            Console.WriteLine("Charge Per Service : " + this.chargePerService);
            Console.WriteLine("No of Services : " + this.noOfServices);
            EmployeeStatus();
        }
    }
}
*/