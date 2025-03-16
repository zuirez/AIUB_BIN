#include <iostream>
using namespace std;

void returnCount(int arr[10],int num)
{
    int count=0;

    for(int i=0; i<10; i++)
    {
        if(arr[i]==num)
        {
            count++;
        }
    }

    cout<<num<<" occured "<<count<<" times"<<endl;
};

int main()
{
    int arr[10], num, count=0;

    cout<<"Enter 10 elements of array : ";
    
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
    }

    bool counted[10] = {false};

    for (int i=0; i<10; i++) 
    {
        if (!counted[i]) 
        {
            returnCount(arr, arr[i]);
            counted[i] = true;

            for (int j=i+1; j<10; j++) 
            {
                if (arr[i]==arr[j]) 
                {
                    counted[j]=true;
                }
            }
        }
    }
}