#include <iostream>
using namespace std;

int main()
{
    float a,b,c;
    cout<<"Enter the valuse of a :";
    cin>>a;
    cout<<"Enter the valuse of b :";
    cin>>b;
    cout<<"Enter the valuse of c :";
    cin>>c;

    if (a==b && b==c)

    {
        cout<<"Its an Equilateral Triangle."<<endl;
    }
    

    else

    {
        if (a!=b && b!=c && c!=a)

        {
            cout<<"Its an Scalene Triangle.";
        }

        else

        {
            cout<<"Its a Isosceles Triangle.";
        }

    }
    

}