#include <iostream>
using namespace std;

int main()
{
    int size;
    bool a=false;

    cout<<"Enter the size of array : ";
    cin>>size;

    int arr[size];

    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                a=true;
                for(int k=j; k<size-1; k++)
                {
                    arr[k]=arr[k+1];
                }
                size--;
                j--;
            }
        }
    }

    if(a==false)
    {
        cout<<"Array already unique.";
    }
    else
    {
        for(int i=0; i<size; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}