import java.util.Scanner;

public class UserInput
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		
		System.out.print("Enter your name : ");
		String name = input.nextLine();
		
		System.out.print("Enter your age : ");
		int age = input.nextInt();
		
		System.out.print("Enter your CGPA : ");
		double cgpa = input.nextDouble();
		
		System.out.print("Do you like coding : ");
		boolean love = input.nextBoolean();
		
		System.out.println("Name : "+name);
		System.out.println("Age : "+age);
		System.out.println("CGPA : "+cgpa);
		System.out.println("Do you like coding? : "+love);
	}
}