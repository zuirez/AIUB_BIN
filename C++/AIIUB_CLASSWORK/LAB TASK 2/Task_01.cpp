#include <iostream>
using namespace std;

int main()
{
    float a,b,c,d,e,sum,avg;
    cout<<"Enter 5 numbers : ";
    cin>>a>>b>>c>>d>>e;

    sum=a+b+c+d+e;
    avg=sum/5;

    cout<<"The summation is : "<<sum<<endl;
    cout<<"The average is : "<<avg<<endl;
    
    if((int)avg%2==0)
        cout<<avg<<" is a even number.";

    else
        cout<<avg<<" is an odd number.";
}
