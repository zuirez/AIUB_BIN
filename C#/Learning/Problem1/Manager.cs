using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem1
{
    internal class Manager : Employee
    {
        protected int yearsOfExperience;

        public Manager()
        {
            Console.WriteLine("Manager class empty constructor called.");
        }

        public Manager(string id, string name, string address, int yearsOfExperience) : base(id, name, address)
        {
            Console.WriteLine("Manager class parameterized constructor called.");
            this.yearsOfExperience = yearsOfExperience;
        }

        public override void EmployeeStatus()
        {
            if (yearsOfExperience > 2)
            {
                Console.WriteLine("Employee (Manager) is eligible for bonus.");
            }
            else
            {
                Console.WriteLine("Employee (Manager) is not eligible for bonus.");
            }
        }

        public void ShowInfo()
        {
            base.ShowInfo();
            Console.WriteLine("Years of Experience : "+this.yearsOfExperience);
            EmployeeStatus();
        }
    }
}
