#include <iostream>
using namespace std;

class Car 
{
    protected:
        string CarName;
        int CarID;
        string CarColor;
        float Price;

    public:
        Car(string name, int id, string color, float price)
        {
            CarName=name;
            CarID=id;
            CarColor=color;
            Price=price;
        }

    void DisplayCarInfo() 
    {
        cout<<"Car Name : "<<CarName<<endl;
        cout<<"Car ID : "<<CarID<<endl;
        cout<<"Car Color : "<<CarColor<<endl;
        cout<<"Car Price : "<<Price<<endl;
    }
};

class TeslaAutopilot : public Car 
{
    private:
        string CarType;
        float TaxPercentage;

    public:
    TeslaAutopilot(string name, int id, string color, float price, string type, float tax)
        : Car(name, id, color, price), CarType(type), TaxPercentage(tax) {}

    void DisplayTeslaInfo() 
    {
        DisplayCarInfo();
        cout<<"Car Type : "<<CarType<<endl;
        cout<<"Tax Percentage : "<<TaxPercentage<<endl;
    }

    float FinalPrice() 
    {
        return Price-(Price*TaxPercentage/100.0);
    }
};

int main() 
{
    Car c("koenigsegg", 007, "Black", 350000);
    TeslaAutopilot t("cybertruck", 1508, "Satin White", 560000, "Autonomous", 5.0);

    cout<<"Car Information : "<<endl;
    c.DisplayCarInfo();
    cout<<endl;

    cout<<"Tesla Information:"<<endl;
    t.DisplayTeslaInfo();
    cout<<"Final Price : "<<t.FinalPrice()<<endl;
}
