using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Banking
{
    class CreditAccount : Account
    {
        public readonly double CreditLimit;

        public CreditAccount()
        {
            Console.WriteLine("Child EC");
        }

        public CreditAccount(string id, string name, double balance, Date openingDate, double credit)
            : base(id, name, balance, openingDate)
        {
            Console.WriteLine("Child PC");
            this.CreditLimit = credit;
        }

        public new void ShowInfo()
        {
            base.ShowInfo();
            Console.WriteLine("Credit:" + this.CreditLimit);
        }

        public override void Withdraw(double amount)
        {
            if (amount < 0)
            {
                Console.WriteLine("Invalid Amount");
                return;
            }

            if (amount > this.balance + this.CreditLimit)
            {
                Console.WriteLine("Insufficient Balance");
                return;
            }

            this.balance -= amount;
            Console.WriteLine("Transaction Successful");
        }
    }
}
