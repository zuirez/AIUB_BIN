#include <iostream>
using namespace std;

int main()
{
    unsigned long long int number;
    cout<<"Enter a number :";
    cin>>number;

    if(number==0)
        cout<<"You have entered Zero.";

    else
    {

        if(number<0)
        number=number*-1;

        int counter=0;

        while (number>0)
        {
            number /=10;
            counter++;
        }
        
        cout<<"Number contains "<<counter<<" digits.";
    }
}