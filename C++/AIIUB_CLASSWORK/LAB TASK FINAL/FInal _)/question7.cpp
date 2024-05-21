#include<iostream>
using namespace std;

int main()
{
    int arr[3][3];

    cout<<"Enter year :";
    
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Elements of array :"<<endl;
    
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Most recent year :";
    
    int recent=arr[0][0];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(arr[i][j]>recent)
            {
                recent=arr[i][j];
            }
        }
    }
    cout<<recent<<endl<<endl;

    cout<<"Oldest year :";
    
    int oldest=arr[0][0];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(arr[i][j]<oldest)
            {
                oldest=arr[i][j];
            }
        }
    }
    cout<<oldest<<endl<<endl;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(arr[i][j]%4==0 && arr[i][j]%100!=00 || arr[i][j]%400==0)
                cout<<arr[i][j]<<" is leap year."<<endl;
        }
    }
}
