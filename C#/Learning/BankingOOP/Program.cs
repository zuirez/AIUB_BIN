using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Banking
{
    class Program
    {
        static void Main(string[] args)
        {
            DebitAccount account = new DebitAccount("Acc-01", "Mehedi", 1000, new Date(10, 10, 2020), 500);
            account.ShowInfo();
        }
    }
}
