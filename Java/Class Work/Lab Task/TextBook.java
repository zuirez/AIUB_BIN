public class TextBook extends Book
{
	private String category;
	private int standard;
	
	public TextBook()
	{
		System.out.println("Empty constractor");
	}
	public TextBook(String isbn, String bookTitle, String authorName, double price, int availableQuantity, int standard, String category)
	{
		super(isbn,bookTitle,authorName,price,availableQuantity);
		this.standard=standard;
		this.category=category;
	}
	
	public void setCategory(String category)
	{
		this.category=category;
	}
	public void setStandard(int standard)
	{
		this.standard=standard;
	}
	
	public String getCategory()
	{
		return category;
	}
	public int getStandard()
	{
		return standard;
	}
	
	public void showDetails2()
	{
		super.showDetails();
		System.out.println("Category : "+getCategory());
		System.out.println("Standard : "+getStandard());
	}
}
