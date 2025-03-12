#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    cout<<"Enter 10 elements of array: ";
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
    }

    for(int i=9; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}