using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Banking
{
    public abstract class Account
    {
        protected string id, name;
        protected double balance;
        protected Date openingDate;
        public static int Count;

        public double Balance
        {
            get
            {
                return balance;
            }
            set
            {
                if (value > 0)
                {
                    balance = value;
                }
            }
        }

        public Account()
        {
            Count++;
            Console.WriteLine("Parent E Constructor");
        }

        public Account(string id, string name, double balance, Date openingDate)
        {
            Count++;
            Console.WriteLine("Parent P Constructor");
            this.id = id;
            this.name = name;
            this.balance = balance;
            this.openingDate = openingDate;
        }

        public void Deposit(double amount)
        {
            if (amount < 0)
            {
                Console.WriteLine("Invalid Amount");
                return;
            }

            balance += amount;
            Console.WriteLine("Deposited");
        }

        public abstract void Withdraw(double amount);

        public void Transfer(Account receiver, double amount)
        {
            if (amount < 0)
            {
                Console.WriteLine("Invalid Amount");
                return;
            }

            if (amount > this.balance)
            {
                Console.WriteLine("Not Sufficient Balance");
                return;
            }

            this.balance -= amount;
            receiver.balance += amount;
        }

        public virtual void ShowInfo()
        {
            Console.WriteLine("Account ID:" + id);
            Console.WriteLine("Account Name:" + name);
            Console.WriteLine("Account Balance:" + balance);
            openingDate.ShowDate();
        }
    }
}
