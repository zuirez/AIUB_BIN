#include <iostream>
using namespace std;

int main()
{
    int size, maxFrequency=0, maxFrqNum;

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
        int currentFrequency=0;

        for(int j=0; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                currentFrequency++;
            }
        }

        if(currentFrequency>maxFrequency)
        {
            maxFrequency=currentFrequency;
            maxFrqNum=arr[i];           
        }
    }

    cout<<"Most frequent element is : "<<maxFrqNum;
}