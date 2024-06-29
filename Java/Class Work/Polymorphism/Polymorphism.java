/*
 
Polymorphism covers 3 main parts

	- Constructor Overloading.
	- Method Overloading.
	- Method Overriding.

	Slide link : https://docs.google.com/presentation/d/1tJVu1EqafLiIqg5_QzZrukRVLlXXuRTb/edit#slide=id.p7

	Hard work always pays off!
	BEST OF LUCK! ^_^
	Created by - MD. Rashedul Islam

 */


public class Polymorphism
{
	//private int a=0;
	//private int b=0;

	//Constructor Overloading.
	public Polymorphism()
	{
		System.out.println("Empty constructor.");
	}
	public Polymorphism(int a)
	{
		System.out.println(a);
	}
	public Polymorphism(int a, int b)
	{
		System.out.println(a+b);
	}


	//Method Overloading.
	public void add()
    {
		System.out.println("Nothing to add.");
	}

	public void add(int a)
	{
		System.out.println(a);
	}
	public void add(int a, int b)
	{
		System.out.println(a+b);
	}
	public void add(double a, double b)
	{
		System.out.println(a+b);
	} 
	public void add(int a, double b)
	{
		System.out.println(a+b);
	} 
	public void add(double a, int b)
	{
		System.out.println(a+b);
	} 


	//Method Overriding.
	void showInfo()
	{
		System.out.println("hello from polymorphism 1 class");
	}
}
