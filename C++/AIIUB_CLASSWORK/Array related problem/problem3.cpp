/*

Develop a program that takes three student’s CGPAs as inputs using a single array and finds the
lowest CGPA.

*/

#include<iostream>
using namespace std;

int main()
{
    float arr[3];

    for(int i=0; i<3; i++)
    {
        cout<<"Enter student "<<i+1<<" cgpa : ";
        cin>>arr[i];
    }

    float a=4; 

    for(int i=0; i<3; i++)
    {
        if(arr[i]<a)
        {
            a=arr[i];
        }
    }
    cout<<"Lowest cgpa : "<<a;
}
