#include <iostream>
using namespace std;

void swap(int *a, int *b) //a,b points to &num1,&num2 respectively
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int num1=5,num2=10;

    cout<<"Before swap : "<<endl;
    cout<<"Number1 = "<<num1<<endl;
    cout<<"Number2 = "<<num2<<endl;

    swap(&num1,&num2); // address of num1, num2 is passed
    
    cout<<"After swap : "<<endl;
    cout<<"Number1 = "<<num1<<endl;
    cout<<"Number2 = "<<num2;
}