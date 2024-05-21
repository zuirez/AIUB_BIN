#include<iostream>
using namespace std;

bool prime(int num)
{
    bool check=true;
    for(int i=2; i<num; i++)
    {
        if(num%i==0)
        {
            check=false;
            break;
        }
    }
    return check;
}

int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    bool check=prime(num);

    if(check)
    {
        cout<<num<<" is a prime number."<<endl;
    }
    else
    {
        cout<<num<<" is not prime number."<<endl;
    }
}
