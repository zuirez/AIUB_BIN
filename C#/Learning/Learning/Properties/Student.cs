using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Class3.OOP.N
{
    internal class Student
    {
        //Global Variable
        public string name;
        public string id;
        private double cgpa;
        //public void setCgpa(double c)
        //{
        //    cgpa = c;
        //}
        //public double getCgpa()
        //{
        //    return cgpa;
        //}
        public double Cgpa
        {
            get
            {
                return cgpa;
            }
            set
            {
                cgpa = value;
            }
        }
        public Student()
        {
            Console.WriteLine("Default Constructor Called");
        }
        public Student(string id) //Local Variable
        {
            Console.WriteLine("Constructor with id Called");
            this.id = id;
        }
        public Student(string n, string i)
        {
            Console.WriteLine("Constructor with name and id Called");
            this.name = n;
            this.id = i;
        }
        public Student(string n, string i, double c)
        {
            Console.WriteLine("Constructor with name, id and cgpa Called");
            this.name = n;
            this.id = i;
            this.cgpa = c;
        }
        public void showDetails()
        {
            Console.WriteLine("Name:" + this.name);
            Console.WriteLine("id:" + this.id);
            Console.WriteLine("cgpa:" + this.Cgpa);
        }
    }
}
