#include <iostream>
using namespace std;

int main()
{
    int b,h,a;

    cout<<"Enter Base :";
    cin>>b;
    cout<<"Enter Height :";
    cin>>h;

    a=0.5*b*h;

    cout<<"Area of triangle is : "<<a<<endl;

    if(a%2==0)
        cout<<a<<" is a even number.";

    else
        cout<<a<<" is an odd number.";

}