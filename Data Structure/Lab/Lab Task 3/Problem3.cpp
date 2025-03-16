#include <iostream>
using namespace std;

int main()
{
    int arr[10]={0,1,2,3,4,5,6,7,8,9}, arr2[10];

    for(int i=0; i<10; i++)
    {
        arr[i]=arr[i]*3;
    }

    for(int i=9; i>=0; i--)
    {
        arr2[9-i]=arr[i];
    }

    for(int i=0; i<10; i++)
    {
        cout<<arr2[i]<<" ";
    }
}