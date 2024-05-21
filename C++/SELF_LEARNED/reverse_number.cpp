#include <iostream>
using namespace std;

int main()
{
    int num, RevNum=0, LastDigt;
    cout<<"Enter a number :";
    cin>>num;

    if(num==0)
    cout<<"You have entered zero.";

    else
    {
        if(num<0)
        num*=-1;
        while(num>0)
        {
            RevNum*=10;
            LastDigt=num%10;
            
            RevNum=RevNum+LastDigt;
            num/=10;

        }

        cout<<"The reversed number is :"<<RevNum;
    }
}