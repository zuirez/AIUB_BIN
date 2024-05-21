/*

Develop a program that takes three student’s CGPAs as inputs using a single array and finds the
lowest CGPA.

*/

#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    cout<<"Enter 5 intger numbers : ";
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];

        if(arr[i]%2==0)
        {
            arr[i]=0;
        }
        else
        {
            arr[i]=1;
        }
    }

    cout<<"Modified array : ";

    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
}
