using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CodePractice1
{
    internal class AllRounder : Player
    {
        private int totalRuns;
        private int totalWickets;

        public AllRounder(string playerId, string playerName, string teamName, int totalRuns, int totalWickets) : base(playerId, playerName, teamName)
        {
            this.totalRuns = totalRuns;
            this.totalWickets = totalWickets;
        }
        public int TotalRuns
        {
            get { return totalRuns; }
            set { totalRuns = value; }
        }
        public int TotalWickets
        {
            get { return totalWickets; }
            set { totalWickets = value; }
        }
        public override void ShowInfo()
        {
            base.ShowInfo();
            Console.WriteLine("Total Runs: " + this.totalRuns);
            Console.WriteLine("Total Wickets: " + this.totalWickets);
            base.PlayerPerformance(this.totalRuns, this.totalWickets);
        }
    }
}
