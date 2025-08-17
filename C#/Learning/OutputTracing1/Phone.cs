using System;

class Phone : Device
{
    public int CameraCount;

    public Phone(string brand) : base(brand)
    {
        CameraCount = 1;
        Console.WriteLine($"Phone {brand} created");
    }
    public Phone(Phone other) : base(other)
    {
        CameraCount = other.CameraCount;
        Console.WriteLine("Phone info copied");
    }
    public float GetPhonePrice()
    {
        return GetBasePrice() + CameraCount * 50;
    }

    public static Phone CreateCopy(Phone p)
    {
        return new Phone(p);
    }
}
class PriceChecker
{
    public static void ShowPrice(Device d)
    {
        Console.WriteLine($"Device Price: {d.GetBasePrice()}");
    }

    public static void ShowPrice(Phone p)
    {
        Console.WriteLine($"Phone Price: {p.GetPhonePrice()}");
    }
}
