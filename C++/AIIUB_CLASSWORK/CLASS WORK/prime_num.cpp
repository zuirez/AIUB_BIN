#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    bool a=0;

    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            a=1;
        }
    }

    if(a==1)
    {
        cout<<n<<" is not a prime number.";
    }
    else
    {
        cout<<n<<" is a prime number.";
    }
}