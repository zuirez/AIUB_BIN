using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CodePractice1
{
    internal class Player
    {
        private string playerId;
        private string playerName;
        private string teamName;

        public Player(string playerId, string playerName, string teamName)
        {
            this.playerId = playerId;
            this.playerName = playerName;
            this.teamName = teamName;
        }

        public string PlayerId
        {
            get { return playerId; }
            set { playerId = value; }
        }

        public string PlayerName
        {
            get { return playerName; }
            set { playerName = value; }
        }

        public string TeamName
        {
            get { return teamName; }
            set { teamName = value; }
        }

        public void PlayerPerformance(int totalWickets)
        {
            if(totalWickets > 100)
            {
                Console.WriteLine("Eligible for award!");
            }
        }

        public void PlayerPerformance(double battingAverage)
        {
            if (battingAverage > 50)
            {
                Console.WriteLine("Eligible for award!");
            }
        }

        public void PlayerPerformance(int totalRuns, int totalWickets)
        {
            if (totalRuns > 1000 && totalWickets > 50)
            {
                Console.WriteLine("Eligible for award!");
            }
        }

        public virtual void ShowInfo()
        {
            Console.WriteLine("Player ID: " + this.playerId);
            Console.WriteLine("Player Name: " + this.playerName);
            Console.WriteLine("Team Name: " + this.teamName);
        }
    }
}
