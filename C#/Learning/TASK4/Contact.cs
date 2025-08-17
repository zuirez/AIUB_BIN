using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TASK4
{
    internal class Contact
    {
        private string personName;
        private string personId;
        private int age;
        private string mobileNumber;
        private char gender;

        public Contact()
        {
            Console.WriteLine("Empty constructor called.");
        }

        public Contact(string personName, string personId, int age, string mobileNumber, char gender)
        {
            this.personName = personName;
            this.personId = personId;
            this.age = age;
            this.mobileNumber = mobileNumber;
            this.gender = gender;
        }

        public string PersonName
        {
            get { return personName; }
            set { personName = value; }
        }

        public string PersonId
        {
            get { return personId; }
            set { personId = value; }
        }

        public int Age
        {
            get { return age; }
            set { age = value; }
        }

        public string MobileNumber
        {
            get { return mobileNumber; }
            set { mobileNumber = value; }
        }

        public char Gender
        {
            get { return gender; }
            set { gender = value; }
        }

        public void DetectMobileOperator()
        {
            if (mobileNumber.StartsWith("017"))
            {
                Console.WriteLine("Mobile Operator is GP");
            }
            else if (mobileNumber.StartsWith("018"))
            {
                Console.WriteLine("Mobile Operator is ROBI");
            }
            else if (mobileNumber.StartsWith("016"))
            {
                Console.WriteLine("Mobile Operator is AIRTEL");
            }
            else if (mobileNumber.StartsWith("015"))
            {
                Console.WriteLine("Mobile Operator is TELETALK");
            }
            else if (mobileNumber.StartsWith("019"))
            {
                Console.WriteLine("Mobile Operator is BANGLALINK");
            }
        }

        public void ShowPersonalInfo()
        {
            Console.WriteLine("Person Name: " + personName);
            Console.WriteLine("Person ID: " + personId);
            Console.WriteLine("Age: " + age);
            Console.WriteLine("Mobile Number: " + mobileNumber);
            Console.WriteLine("Gender: " + gender);
        }
    }
}
