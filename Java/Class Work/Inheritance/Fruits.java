public class Fruits 
{
    private String taste;
    private String color;

    public Fruits()
    {
        System.out.println("Empty Constactor");
    }
    public Fruits(String taste, String color)
    {
        System.out.println("Parametrized Constractor");
        this.taste=taste;
        this.color=color;
    }

    public void setTaste(String taste)
    {
        this.taste=taste;
    }
    public void setColor(String color)
    {
        this.color=color;
    }
	
    public String getTaste()
    {
        return taste;
    }
    public String getColor()
    {
        return color;
    }

    public void displayInfo()
    {
        System.out.println("Taste : "+getTaste());
        System.out.println("Color : "+getColor());
    }
}
