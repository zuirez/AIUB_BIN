using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TASK4
{
    internal class Mobile
    {
        private string mobileOwnerName;
        private string mobileNumber;
        private string mobileBalance;
        private string mobileOSName;
        private bool isLock;

        public Mobile()
        {
            Console.WriteLine("Empty constructor called.");
        }

        public Mobile(string mobileOwnerName, string mobileNumber, string mobileBalance, string mobileOSName, bool isLock)
        {
            this.mobileOwnerName = mobileOwnerName;
            this.mobileNumber = mobileNumber;
            this.mobileBalance = mobileBalance;
            this.mobileOSName = mobileOSName;
            this.isLock = isLock;
        }

        public string MobileOwnerName
        {
            get { return mobileOwnerName; }
            set { mobileOwnerName = value; }
        }

        public string MobileNumber
        {
            get { return mobileNumber; }
            set { mobileNumber = value; }
        }

        public string MobileBalance
        {
            get { return mobileBalance; }
            set { mobileBalance = value; }
        }

        public string MobileOSName
        {
            get { return mobileOSName; }
            set { mobileOSName = value; }
        }

        public bool IsLock
        {
            get { return isLock; }
            set { isLock = value; }
        }

        public void Recharge(int amount)
        {
            if (!isLock)
            {
                mobileBalance += amount;
                Console.WriteLine($"Recharged {amount} taka. New balance: {mobileBalance}");
            }
            else
            {
                Console.WriteLine("Phone is locked. Cannot recharge.");
            }
        }

        public void CallSomeone(int timeDuration)
        {
            if (!isLock)
            {
                int cost = timeDuration;
                int mobileBalance = int.Parse(this.mobileBalance);
                if (mobileBalance >= cost)
                {
                    mobileBalance -= cost;
                    Console.WriteLine($"Call made for {timeDuration} minutes. Remaining balance: {mobileBalance}");
                }
                else
                    Console.WriteLine("Not enough balance.");
            }
            else
                Console.WriteLine("Phone is locked. Cannot make call.");
        }

        public void ShowInfo()
        {
            Console.WriteLine("Mobile Owner Name: " + mobileOwnerName);
            Console.WriteLine("Mobile Number: " + mobileNumber);
            Console.WriteLine("Mobile Balance: " + mobileBalance);
            Console.WriteLine("Mobile OS Name: " + mobileOSName);
            Console.WriteLine("Is Mobile Locked: " + (isLock ? "Yes" : "No"));
        }
    }
}
