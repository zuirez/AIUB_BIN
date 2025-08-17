using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Banking
{
    public struct Date
    {
        private int day, month, year;

        public int Day
        {
            get
            {
                return day;
            }
            set
            {
                if (value < 1 || value > 31)
                {
                    Console.WriteLine("Invalid Day");
                    return;
                }

                day = value;
            }
        }
        public int Month
        {
            get
            {
                return month;
            }
            set
            {
                if (value < 1 || value > 12)
                {
                    Console.WriteLine("Invalid Month");
                    return;
                }

                day = value;
            }
        }
        public int Year
        {
            get
            {
                return year;
            }
            set
            {
                if (value.ToString().Length != 4)
                {
                    Console.WriteLine("Invalid Year");
                    return;
                }

                day = value;
            }
        }

        public Date(int day, int month, int year)
        {
            this.day = day;
            this.month = month;
            this.year = year;
        }

        public void ShowDate()
        {
            string formattedDate = "";

            if (day > 9)
                formattedDate = day.ToString();
            else
                formattedDate = "0" + day;

            formattedDate += "-";

            switch (month)
            {
                case 1:
                    formattedDate += "Jan-";
                    break;
                case 2:
                    formattedDate += "Feb-";
                    break;
                case 3:
                    formattedDate += "Mar-";
                    break;
                case 4:
                    formattedDate += "Apr-";
                    break;
                case 5:
                    formattedDate += "May-";
                    break;
                case 6:
                    formattedDate += "Jun-";
                    break;
                case 7:
                    formattedDate += "Jul-";
                    break;
                case 8:
                    formattedDate += "Aug-";
                    break;
                case 9:
                    formattedDate += "Sep-";
                    break;
                case 10:
                    formattedDate += "Oct-";
                    break;
                case 11:
                    formattedDate += "Nov-";
                    break;
                case 12:
                    formattedDate += "Dec-";
                    break;
            }

            formattedDate += year;

            Console.WriteLine(formattedDate);
        }
    }
}
