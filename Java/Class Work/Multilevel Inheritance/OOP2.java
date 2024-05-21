public class OOP2 extends OOP1
{
    private String faculty3;
    private int credit3;
    private int hour3;
    
    static 
    {
        System.out.println("Static OOP2");
    }

    public OOP2()
    {
        System.out.println("Empty construstor");
    }

    public OOP2(String faculty, int credit, int hour,String faculty2, int credit2, int hour2, String faculty3, int credit3, int hour3)
    {
        super(faculty, credit, hour, faculty2, credit2, hour2);
        System.out.println("Parameterzed Construstor OOP2");
        this.credit3=credit3;
        this.faculty3=faculty3;
        this.hour3=hour3;
    }

    public void setFaculty3(String faculty3)
    {
        this.faculty3=faculty3;
    }
    public String getFaculty3()
    {
        return faculty3;
    }

    public void setCredit3(int credit3)
    {
        this.credit3=credit3;
    }
    public int getCredit3()
    {
        return credit3;
    }

    public void setHour3(int hour3)
    {
        this.hour3=hour3;
    }
    public int getHour3()
    {
        return hour3;
    }    

    public void showInfo3()
    {
        showInfo2();
        System.out.println("*****DETAILS*****");
        System.out.println("Faculty3 : "+getFaculty3());
        System.out.println("Credit3 : "+getCredit3());
        System.out.println("Hour3 : "+getHour3());
    }
}
