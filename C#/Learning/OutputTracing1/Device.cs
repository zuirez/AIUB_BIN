using System;

class Device
{
    public string Brand;
    public Device(string brand)
    {
        Brand = brand;
        Console.WriteLine($"Device {brand} created");
    }
    public Device(Device other)
    {
        Brand = other.Brand;
        Console.WriteLine("Device info copied");
    }
    public float GetBasePrice()
    {
        return 100.0f;
    }
    public static Device CreateCopy(Device d)
    {
        return new Device(d);
    }
}
