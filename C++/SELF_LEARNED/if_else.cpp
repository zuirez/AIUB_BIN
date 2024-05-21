#include <iostream>
using namespace std;

int main()
{
    int number;

    cout<<"Enter a whole number :";

    cin>>number;

    if(number%2==0)
    {
        cout<<"The number is even number."<<endl;
    }

    else
    {
        cout<<"The number is odd number."<<endl;
        cout<<"Reminder is "<<number%2<<endl;
    }

    cout<<"Thanks.";
}