public class Mango extends Fruits{
    private int quantity;
    private int price;

    public Mango()
    {
        System.out.println("Empty Constactor");
    }
    public Mango(String taste, String color, int quantity, int price)
    {
		super(taste,color);
        System.out.println("Parametrized Constractor");
        this.quantity=quantity;
        this.price=price;
    }

    public void setQuantity(int quantity)
    {
        this.quantity=quantity;
    }
    public void setPrice(int price)
    {
        this.price=price;
    }

    public int getQuantity()
    {
        return quantity;
    }
    public int getPrice()
    {
        return price;
    }

    public void displayInfo()
    {
        System.out.println("Quantity : "+getQuantity());
        System.out.println("Price : "+getPrice());
    }
}
