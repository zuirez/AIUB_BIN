using System.Security.Policy;

class Program
{
    static void Main()
    {
        Device d1 = new Device("GenericBrand");
        Phone p1 = new Phone("Samsung");

        Device d2 = Device.CreateCopy(d1);
        Phone p2 = Phone.CreateCopy(p1);

        PriceChecker.ShowPrice(d1);
        PriceChecker.ShowPrice(p1);

        PriceChecker.ShowPrice(d2);
        PriceChecker.ShowPrice(p2);
    }
}
