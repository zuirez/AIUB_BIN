#include <iostream>
using namespace std;

class LibraryTokenReservation 
{
    private:
        string FromTime,ToTime;
        float TokenPrice;
        int TokenQuantity;

    public:
        LibraryTokenReservation(string from, string to, int quantity)
        {
            FromTime=from;
            ToTime=to; 
            TokenQuantity=quantity;
            
            SetTokenInfo(to, from);
        }

    void SetTokenInfo(string to, string from) 
    {
        FromTime=from;
        ToTime=to;
    }

    void CalculatePrice() 
    {
        if(FromTime=="9 AM" && ToTime=="1 PM")
            TokenPrice=200.0;

        else if(FromTime=="12 PM" && ToTime=="3 PM")
            TokenPrice=300.0;

        else if(FromTime=="1 PM" && ToTime=="5 PM")
            TokenPrice=420.0;

        else if(FromTime=="3 PM" && ToTime=="7 PM")
            TokenPrice=500.0;

        else
            cout<<"Invalid time range."<<endl;
            return;

        DisplayTokenInfo();
    }

    bool Membership() 
    {
        return true;
    }

    void DisplayTokenInfo() 
    {
        cout<<"From Time : "<<FromTime<<endl;
        cout<<"To Time : "<<ToTime<<endl;
        cout<<"Token Price : "<<TokenPrice<<" TK"<<endl;
        cout<<"Token Quantity : "<<TokenQuantity<<endl;

        if(Membership()) 
        {
            TokenPrice*=0.95;
            cout<<"Discount Applied : 5%"<<endl;
        }

        cout<<"Total Price : "<<TokenPrice*TokenQuantity<<" TK"<<endl;
    }
};

int main() 
{
    LibraryTokenReservation tokenReservation("9 AM", "1 PM", 3);

    tokenReservation.CalculatePrice();
}
