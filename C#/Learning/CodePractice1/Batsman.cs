using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CodePractice1
{
    internal class Batsman : Player
    {
        private int totalRuns;
        private double battingAverage;
        private int highestScore;

        public Batsman(string playerId, string playerName, string teamName, int totalRuns, double battingaverage, int highestScore) : base(playerId, playerName, teamName)
        {
            this.totalRuns = totalRuns;
            this.battingAverage = battingaverage;
            this.highestScore = highestScore;
        }

        public int TotalRuns
        {
            get { return totalRuns; }
            set { totalRuns = value; }
        }

        public double BattingAverage
        {
            get { return battingAverage; }
            set { battingAverage = value; }
        }

        public int HighestScore
        {
            get { return highestScore; }
            set { highestScore = value; }
        }

        public override void ShowInfo()
        {
            base.ShowInfo();
            Console.WriteLine("Total Runs: " + this.totalRuns);
            Console.WriteLine("Batting Average: " + this.battingAverage);
            Console.WriteLine("Highest Score: " + this.highestScore);
            base.PlayerPerformance(this.battingAverage);
        }
    }
}
