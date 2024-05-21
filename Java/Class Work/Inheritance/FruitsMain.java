public class FruitsMain {
    public static void main(String[] args) 
    {
        Fruits f1 = new Fruits();
        f1.setTaste("Sweet");
        f1.setColor("Red");
        f1.displayInfo();
		
		Fruits f2 = new Fruits("Sour","Green");
        f2.displayInfo();

        Mango m1 = new Mango();
        m1.setQuantity(5);
        m1.setPrice(500);
		m1.displayInfo();
		
		Mango m2 = new Mango("Green Sweet","yellow",3,150);
        m2.displayInfo();
    }
}
