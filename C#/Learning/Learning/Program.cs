using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Class3.OOP.N
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Student s1 = new Student();
            Student s2 = new Student("25-00001-1");
            Student s3 = new Student("Javed", "25-00002-1");
            Student s4 = new Student("Sayed", "25-00003-1", 3.37);

            s1.name = "Rahim";
            s1.id = "25-00000-1";
            s1.Cgpa = 3.56;

            s1.showDetails();
            s2.showDetails();
            s3.showDetails();
            s4.showDetails();

            //Way 2
            Employee employee = new Employee();
            employee.setSalary(10000);
            Console.WriteLine(employee.getSalary());
            Console.WriteLine(employee.getBonus());

            //Way 1
            Employee employee1 = new Employee("25-00000-1", "Rahim", 10000);
            Console.WriteLine(employee1.getBonus());

            //way 3

            Employee employee2 = new Employee();
            employee2.Salary = 10000;
            Console.WriteLine(employee2.Salary);
            Console.WriteLine(employee2.getBonus());

        }
    }
}
