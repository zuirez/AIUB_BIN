using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CodePractice1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Player[] players = new Player[4];
            players[0] = new Batsman("P-1", "Tom Latham", "NZ", 6289, 57.3, 183);
            players[1] = new Bowler("P-2", "Taskin Ahmed", "BD", 104, 23.3);
            players[2] = new AllRounder("P-3", "Glenn Maxwell", "AUS", 7500, 98);
            players[3] = new AllRounder("P-4", "Sam Curran", "ENG", 781, 60);
            foreach (Player player in players)
            {
                player.ShowInfo();
                Console.WriteLine();
            }
        }
    }
}
