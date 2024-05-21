#include<iostream>
using namespace std;

int main()
{
    int arr[3][4];

    cout<<"Enter elements of array : ";
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<4; col++)
        {
            cin>>arr[row][col];
        }
    }

    cout<<"Elements of array are : "<<endl;

    for(int row=0; row<3; row++)
    {
        for(int col=0; col<4; col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    for(int row=0; row<3; row++)
    {
        for(int col=0; col<4; col++)
        {
            if(arr[row][col]%2==0)
            {
                cout<<arr[row][col]<<" is an even number.";
            }

            else
            {
                cout<<arr[row][col]<<" is an odd number.";
            }

            cout<<endl;
        }
    }    

}