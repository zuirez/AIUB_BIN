#include<iostream>
using namespace std;

int main()
{
    int arr[2][3];

    cout<<"Enter elements of array : ";
    for(int row=0; row<2; row++)
    {
        for(int col=0; col<3; col++)
        {
            cin>>arr[row][col];
        }
    }

    cout<<"Elements of array are : "<<endl;
    for(int row=0; row<2; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    for(int row=0; row<2; row++)
    {
        for(int col=0; col<3; col++)
        {
            if(arr[row][col]<0)
            {
                cout<<arr[row][col]<<" is negative number.";
            }

            else
            {
                cout<<arr[row][col]<<" is positive number.";
            }
            cout<<endl;
        }
    }
    
}