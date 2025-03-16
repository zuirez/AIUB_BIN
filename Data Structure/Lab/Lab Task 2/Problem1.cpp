#include <iostream>
using namespace std;

int main()
{
    int size1, size2;

    cout<<"Enter the size of array 1 and 2 : ";
    cin>>size1>>size2;

    int arr1[size1], arr2[size2], size3=size1+size2;
    int newArr[size3];

    cout<<"Enter elements of 1st array : ";
    for(int i=size1-1; i>=0; i--)
    {
        cin>>arr1[i];
    }

    cout<<"Enter elements of 2nd array : ";
    for(int i=size2-1; i>=0; i--)
    {
        cin>>arr2[i];
    }

    for(int i=0; i<size2; i++)
    {
        newArr[i]=arr2[i];
    }

    for(int i=0; i<size1; i++)
    {
        newArr[size2+i]=arr1[i];
    }

    cout<<"Merged array : ";

    for(int i=0; i<size3; i++)
    {
        cout<<newArr[i]<<" ";
    }
}