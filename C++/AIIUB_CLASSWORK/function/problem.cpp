#include<iostream>
using namespace std;

void evenodd(int num)
{
    if(num%2==0)
    {
        cout<<"Even number"<<endl;
    }
    else
    {
        cout<<"Odd number"<<endl;
    }
}

void PosNeg(int num)
{
    if(num>0)
    {
        cout<<"Positive number"<<endl;
        evenodd(num);
    }
    else
    {
        cout<<"Negative number"<<endl;
    }
}

int main()
{
    int num;
    cout<<"Enter :";
    cin>>num;
    PosNeg(num);
}
