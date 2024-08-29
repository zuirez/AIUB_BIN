public class StringMethods
{
	static void space()
	{
		System.out.println(); System.out.println();
	}
		
	public static void main(String[] args)
	{
		String name = "Rashed";
		String name2 = "Islam";
		String name3 = "";
		String name4 = "SHAWON";
		String name5 = "shawon";
		String name6 = "Hasan";
		
		int a=5;
		String b="20";
		
		
		//charAt (Shows the character of the index)
		System.out.println("chatAt : ");
		System.out.println(name.charAt(1));
		space();
		
		//concat (Concates 2 string)
		System.out.println("concat : ");
		System.out.println(name.concat(" "+name2));
		
		/*if we concat a int or other data type with string using (+) 
		the other data type converts into string*/
		System.out.println(a+b);
		space();
		
		//equals (checks if 2 string is equal or not)
		System.out.println("equals : ");
		System.out.println(name.equals(name2));
		System.out.println(name.equals(name));
		space();
		
		//compareTo (compares 2 string and shows the difference between the first index as output)
		System.out.println("compareTo : ");
		System.out.println(name.compareTo(name2));
		System.out.println(name2.compareTo(name));
		System.out.println(name2.compareTo(name2));
		space();
		
		//contains (checks if a word is containing in the string)
		System.out.println("contains : ");
		System.out.println(name.contains("a"));
		System.out.println(name.contains("z"));
		space();
		
		//isEmpty (checks if a string is empty or not)
		System.out.println("isEmpty : ");
		System.out.println(name.isEmpty());
		System.out.println(name3.isEmpty());
		space();
		
		//length (prints the length of a string)
		System.out.println("length : ");
		System.out.println(name.length());
		space();
		
		//toLowerCase (Turns all character into lower case)
		System.out.println("toLowerCase : ");
		System.out.println(name4.toLowerCase());
		space();
		
		//toUpperCase (Turns all character into upper case)
		System.out.println("toUpperCase : ");
		System.out.println(name5.toUpperCase());
		space();
		
		//endsWith (check if the string ends with the character)
		System.out.println("endsWith : ");
		System.out.println(name.endsWith("z"));
		System.out.println(name.endsWith("d"));
		space();
		
		//startsWith (check if the string starts with the character)
		System.out.println("startsWith : ");
		System.out.println(name.startsWith("R"));
		System.out.println(name.startsWith("r"));
		space();
		
		//replace (replace a character with another character (does replace all character))
		System.out.println("replace : ");
		System.out.println(name.replace("d","D"));
		System.out.println(name6.replace("a","A"));
		space();
		
		//substring (extract a part from string, have to select the index of the part)
		System.out.println("substring : ");
		System.out.println(name.substring(0,4));
		space();
		
		//indexOf (index of a character)
		System.out.println("indexOf : ");
		System.out.println(name.indexOf('h'));
		space();
		
		//valueOf
		System.out.println("ignoreCase : ");
		//System.out.println(name.valueOf(name));
		space();
	}
}