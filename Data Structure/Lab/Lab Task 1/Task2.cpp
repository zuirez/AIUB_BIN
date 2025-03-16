#include<iostream>
using namespace std;

int main()
{
    int arr[10], even=0, odd=0;

    cout<<"Enter 10 elements of array: ";

    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
    }

    for(int i=9; i>=0; i--)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout<<"There are "<<even<<" even numbers."<<endl;
    cout<<"There are "<<odd<<" odd numbers."<<endl;
}