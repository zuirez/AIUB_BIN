public class IP 
{
    private String faculty;
    private int credit;
    private int hour;
    
    static 
    {
        System.out.println("Static IP");
    }

    public IP()
    {
        System.out.println("Empty construstor");
    }

    public IP(String faculty, int credit, int hour)
    {
        System.out.println("Parameterzed Construstor of IP");
        this.credit=credit;
        this.faculty=faculty;
        this.hour=hour;
    }

    public void setFaculty(String faculty)
    {
        this.faculty=faculty;
    }
    public String getFaculty()
    {
        return faculty;
    }

    public void setCredit(int credit)
    {
        this.credit=credit;
    }
    public int getcredit()
    {
        return credit;
    }

    public void setHour(int hour)
    {
        this.hour=hour;
    }
    public int getHour()
    {
        return hour;
    }

    public void showInfo()
    {
        System.out.println("*****DETAILS*****");
        System.out.println("Faculty : "+getFaculty());
        System.out.println("Credit : "+getcredit());
        System.out.println("Hour : "+getHour());
    }
}
