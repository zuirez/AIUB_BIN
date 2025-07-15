#include<iostream>
using namespace std;

int main()
{
    int arr[] = {5,12,4,10,2};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<"Given array : ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=1; i<size; i++)
    {
        int key = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }

        arr[j+1] = key;
    }

    cout<<"Sorted array : ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}