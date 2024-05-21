public class AiubGradingSystem 
{
    public static void main(String[] args)
	{
		double x=85;
		if(x<=100 && x>=90)
			System.out.println("A+");
		else if(x<=89 && x>=85)
			System.out.println("A");
		else if(x<=84 && x>=80)
			System.out.println("B+");
		else if(x<=79 && x>=75)
			System.out.println("B");
		else if(x<=74 && x>=70)
			System.out.println("C+");
		else if(x<=69 && x>=65)
			System.out.println("C");
		else if(x<=64 && x>=60)
			System.out.println("D+");
		else if(x<=59 && x>=50)
			System.out.println("D");
		else
			System.out.println("F");
	}
}