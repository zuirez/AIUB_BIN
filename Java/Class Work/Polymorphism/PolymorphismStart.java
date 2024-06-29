public class PolymorphismStart 
{
    public static void main(String[] args)
    {
        //Constructor Overloading.
        //Polymorphism p1 = new Polymorphism();
        //Polymorphism p5 = new Polymorphism(5);
        //Polymorphism p6 = new Polymorphism(5, 5);

        Polymorphism p2= new Polymorphism();

        //Method Overloading.
        p2.add();
        p2.add(5);
        p2.add(5.5, 5);
        p2.add(5, 6.5);
        p2.add(4.1, 3.2);
        p2.add(2, 3);


        //Method Overriding.
        Polymorphism p3 = new Polymorphism();
        p3.showInfo();

        Polymorphism p4 = new Polymorphism2();
        p4.showInfo();
    }    
}
