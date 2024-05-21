#include <iostream>
using namespace std;

int main()
{
    int z;
    cout<<"Enter a value of Z : ";
    cin>>z;

    z=(z*z*z*z*z)+(z*z*z*z*z*z*z)+(z*z*z*z*z*z*z*z*z)+(z*z*z*z)-(z*z*z)*(z*z);
    cout<<"Z^5+Z^7+Z^9+Z^4-Z^3*Z^2 is equal to : "<<z;
}