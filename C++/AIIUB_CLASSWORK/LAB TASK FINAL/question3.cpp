#include<iostream>
using namespace std;

void callbyvalue(int a, int b)
{
    cout<<"Before a :"<<a<<" b :"<<b<<endl;
    a=a/10;
    b=b/10;
    cout<<"After a :"<<a<<" b :"<<b<<endl;
}

void callbyreference(int *c, int *d)
{
    cout<<"Before c :"<<*c<<" d :"<<*d<<endl;

    *c=*c/10;
    *d=*d/10;
    cout<<"After c :"<<*c<<" d :"<<*d<<endl;
}

int main()
{
    int x=50, y=100, p=50, q=100;
    callbyvalue(x,y);
    cout<<"x:"<<x<<" y:"<<y<<endl;
    cout<<endl;

    callbyreference(&x,&y);
    cout<<"x:"<<x<<" y:"<<y<<endl;
}
