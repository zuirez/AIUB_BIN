using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CodePractice1
{
    internal class Bowler : Player
    {
        private int totalWickets;
        private double bowlingAverage;

        public Bowler(string playerId, string playerName, string teamName, int totalWickets, double bowlingAverage) : base(playerId, playerName, teamName)
        {
            this.totalWickets = totalWickets;
            this.bowlingAverage = bowlingAverage;
        }

        public int TotalWickets
        {
            get { return totalWickets; }
            set { totalWickets = value; }
        }

        public double BowlingAverage
        {
            get { return bowlingAverage; }
            set { bowlingAverage = value; }
        }

        public override void ShowInfo()
        {
            base.ShowInfo();
            Console.WriteLine("Total Wickets: " + this.totalWickets);
            Console.WriteLine("Bowling Average: " + this.BowlingAverage);
            base.PlayerPerformance(this.totalWickets);
        }
    }
}
