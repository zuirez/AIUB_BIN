#include<iostream>
using namespace std;

void value(int *a)
{
    *a=*a+2;
    cout<<"*a : "<<*a<<endl;
}

int main()
{
    int x=5;
    value(&x);
    cout<<"x : "<<x<<endl;
}
