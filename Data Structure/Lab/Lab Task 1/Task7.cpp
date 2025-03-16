#include<iostream>
using namespace std;

int main()
{
    int sum=0, size, maxValue=0;

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
        if(arr[i]>maxValue)
        {
            maxValue=arr[i];
        }
    }

    int minValue=maxValue;

    for(int i=0; i<size; i++)
    {
        if(arr[i]<minValue)
        {
            minValue=arr[i];
        }
    }

    cout<<"Difference between maximum and minimum element is : "<<(maxValue-minValue);
}