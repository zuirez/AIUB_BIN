public class Main
{
	public static void main(String []args)
	{
		TextBook book1= new TextBook("abcd","Mars","Rashed",499.99,1000,10,"Sci-Fi");
		book1.showDetails2();
		
		TextBook book2= new TextBook();
		book2.setIsbn("dcba");
		book2.setBookTitle("Earth");
		book2.setAuthorName("Shawon");
		book2.setPrice(599.99);
		book2.setAvailableQuantity(500);
		book2.setStandard(12);
		book2.setCategory("Sci-Fi");
		book2.showDetails2();
	}
}
