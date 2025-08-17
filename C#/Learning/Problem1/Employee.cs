/*using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem1
{
    internal class Employee
    {
        protected string id;
        protected string name;
        protected string address;

        public Employee()
        {
            Console.WriteLine("Employee class empty constructor called.");
        }

        public Employee(string id, string name, string address)
        {
            Console.WriteLine("Employee class parameterized constructor called.");
            this.id = id;
            this.name = name;
            this.address = address;
        }

        public virtual void EmployeeStatus()
        {
            
        }

        protected void ShowInfo()
        {
            Console.WriteLine("Employee Information:");
            Console.WriteLine("ID : "+ this.id);
            Console.WriteLine("Name : " + this.name);
            Console.WriteLine("Address : " + this.address);
        }
    }
}
*/