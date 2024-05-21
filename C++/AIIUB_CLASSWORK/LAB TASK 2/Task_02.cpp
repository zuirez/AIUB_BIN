#include <iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter a year : ";
    cin>>year;

    if(year>1800 && year<2023)

        if(year%4==0 && year%100!=00 || year%400==0)
            cout<<year<<" is leap year.";
        else
            cout<<year<<" is not leap year.";
    
    else 
        cout<<"Invalid year.";
}