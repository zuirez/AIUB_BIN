#include <iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter a number :";
    cin>>num;

    if(num%2==0 && num%5==0 && num%11==0)
        cout<<num<<" is divisible by 2,5 and 11.";

    else
        cout<<num<<" is not divisible by 2,5 and 11.";

}