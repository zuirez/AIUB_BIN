#include <iostream>
using namespace std;

float dep(float credit, float sum)
{
    credit=credit+sum;
    return credit;
}

float wdw(float credit, float sub)
{
    credit=credit-sub;
    return credit;
}

int main()
{
    float credit, sum, sub;
    cout<<"Enter your current balance : ";
    cin>>credit;

    cout<<"How much money do you want to add? : ";
    cin>>sum;

    cout<<"Your current balance is : "<<dep(credit, sum)<<" taka"<<endl;

    cout<<"How much money do you want to withdraw? : ";
    cin >> sub;

    cout<<"Your current balance is : "<<wdw(credit, sub)<<" taka"<<endl;
}
