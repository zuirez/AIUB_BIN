#include<iostream>
using namespace std;

void sum(int a, int b)
{
    int add=a+b;
    cout<<"Sum : "<<add<<endl;
}

void sub(int a, int b)
{
    int sub=a-b;
    cout<<"Sub : "<<sub<<endl;
}

int main()
{
    sum(10,20);
    sub(30,5);
}
