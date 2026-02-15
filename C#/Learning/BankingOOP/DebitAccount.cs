using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Banking
{
    class DebitAccount : Account
    {
        public double MinimumBalance { get; set; }

        public DebitAccount()
        {
            Console.WriteLine("Child EC");
        }

        public DebitAccount(string id, string name, double balance, Date openingDate, double minimum)
            : base(id, name, balance, openingDate)
        {
            Console.WriteLine("Child PC");
            this.MinimumBalance = minimum;
        }

        public new void ShowInfo()
        {
            base.ShowInfo();
            Console.WriteLine("Minimum:" + this.MinimumBalance);
        }

        public override void Withdraw(double amount)
        {
            if (amount < 0)
            {
                Console.WriteLine("Invalid Amount");
                return;
            }

            if (this.balance - amount < MinimumBalance)
            {
                Console.WriteLine("Insufficient Balance");
                return;
            }

            this.balance -= amount;
            Console.WriteLine("Transaction Successful");
        }
    }
}
