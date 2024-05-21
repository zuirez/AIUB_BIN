#include <iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter a number :";
    cin>>number;

    int f=1;

    for (int i = 1; i <= number; i++) 
    {
        f=f*i;
    }

    cout<<"Factorial of "<<number <<" is = "<<f;
}