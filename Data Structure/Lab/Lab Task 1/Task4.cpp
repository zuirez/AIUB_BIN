#include<iostream>
using namespace std;

int main()
{
    int sum=0, size;

    cout<<"Enter the size of the array : ";
    cin>>size;

    int arr[size];

    cout<<"Enter elements of array: ";

    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<size; i++)
    {
        sum=sum+arr[i];
    }

    cout<<"Sum of the elements of the array is : "<<sum;
}