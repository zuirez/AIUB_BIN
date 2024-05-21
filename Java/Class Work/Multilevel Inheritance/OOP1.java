public class OOP1 extends IP
{
    private String faculty2;
    private int credit2;
    private int hour2;
    
    static 
    {
        System.out.println("Static OOP1");
    }

    public OOP1()
    {
        System.out.println("Empty construstor");
    }

    public OOP1(String faculty, int credit, int hour, String faculty2, int credit2, int hour2)
    {
        super(faculty,credit,hour);
        System.out.println("Parameterzed Construstor of OOP1");
        this.credit2=credit2;
        this.faculty2=faculty2;
        this.hour2=hour2;
    }

    public void setFaculty2(String faculty2)
    {
        this.faculty2=faculty2;
    }
    public String getFaculty2()
    {
        return faculty2;
    }

    public void setCredit2(int credit2)
    {
        this.credit2=credit2;
    }
    public int getCredit2()
    {
        return credit2;
    }

    public void setHour2(int hour2)
    {
        this.hour2=hour2;
    }
    public int getHour2()
    {
        return hour2;
    }    

    public void showInfo2()
    {
        showInfo();
        System.out.println("*****DETAILS*****");
        System.out.println("Faculty2 : "+getFaculty2());
        System.out.println("Credit2 : "+getCredit2());
        System.out.println("Hour2 : "+getHour2());
    }
}
