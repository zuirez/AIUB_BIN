#include <iostream>
using namespace std;

int main()
{
    int arr[10];

    cout<<"Enter 10 elements for array : ";

    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
    }

    cout<<"Entered array : ";
    for(int i=0; i<10; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Entered array in reverse order : ";
    for(int i=9; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }
}