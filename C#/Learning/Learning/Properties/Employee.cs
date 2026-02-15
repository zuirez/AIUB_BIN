using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Class3.OOP.N
{
    public class Employee
    {
        private string id;
        private string name;
        private double salary;
        //way 3
        public string Id
        {
            get { return id; }
            set { id = value; }
        }
        public string Name
        {
            get { return name; }
            set { name = value; }
        }
        public double Salary
        {
            get { return salary; }
            set { salary = value; }
        }

        // Way 2
        public Employee()
        {

        }
        public void setSalary(double salary)
        {
            this.salary = salary;
        }
        public double getSalary()
        {
            return this.Salary;
        }

        //Way 1
        public Employee(string id, string name, double salary)
        {
            this.id = id;
            this.name = name;
            this.salary = salary;
        }


        //Common
        public double getBonus()
        {
            return this.salary * 0.6;
        }
    }
}
