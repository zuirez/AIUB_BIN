#include <iostream>
using namespace std;

int main()
{
    int pin, conpin,yn, userpin, counter=0;
    string name;
    
    cout<<"Set a username :";
    cin>>name;
    cout<<"Set a pin :";
    cin>>pin;
    cout<<"Confirm Pin :";
    cin>>conpin;

    if(conpin==pin)
    cout<<"Your pin has been set. Type 1 to login :";
    while (conpin!=pin && counter<1)
    {
        cout<<"Pin didn't match. Try again later.";
        counter++;
    }
    
    cin>>yn;
    switch (yn)
    {
    case 1: cout<<"Enter your pin :"; 
            cin>>userpin;
            if(userpin==pin)
            cout<<"You are logged in.\nWelcome "<<name; 
            else
            cout<<"You entered wrong password."; break;
    
    default: cout<<"You entered wrong password.";break;
    }
}