using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OutputPractice2
{
    internal class Program
    {
        public class BaseClass
        {
            internal int value = 5;
        }

        public class DerivedClass : BaseClass
        {
            protected internal int bonus = 15;
        }

        public class MessageLogger
        {
            protected static string log = "Start-";
            protected MessageLogger()
            {
                log += "Logger";
            }
        }

        class CustomLogger : MessageLogger
        {
            public CustomLogger()
            {
                log += "Custom";
            }
            public static string ShowLog()
            {
                Console.WriteLine(log);
                return log;
            }

            public class FinalLogger : MessageLogger
            {
                public FinalLogger()
                {
                    log += "Final";
                }
            }

            public static void PrintBaseValue(BaseClass bc)
            {
                Console.WriteLine(bc.value);
            }

            public static void PointBonusValue(DerivedClass dc)
            {
                Console.WriteLine(dc.bonus);
            }

            public static void Main(string[] args)
            {
                BaseClass baseObj = new BaseClass();
                baseObj.value = 20;

                DerivedClass derivedObj = new DerivedClass();
                derivedObj.bonus = 45;

                PrintBaseValue(baseObj);
                PointBonusValue(derivedObj);
                PrintBaseValue(derivedObj);

                Console.WriteLine(log);
                Console.WriteLine("Trace the out:");

                log = "";
                new FinalLogger();
                Console.WriteLine(log);
                Console.WriteLine("End Log = "+log);

                Console.WriteLine("Base Value = "+baseObj.value);
            }
        }
    }
}