#include<iostream>
using namespace std;

int main()
{
    int min,max,n;

    cout<<"Enter minimum range :";
    cin>>min;
    cout<<"Enter maximum range :";
    cin>>max;

    n=(max-min)+1;

    int arr[n],even[n],odd[n],prime[n];

    for(int i=0; i<n; i++)
    {
        arr[i]=min;
        min++;
    }

    cout<<"Even numbers : ";

    for(int j=0; j<n; j++)
    {
        if(arr[j]%2==0)
        {
            even[j]=arr[j];
            cout<<even[j]<<" ";
        }
    }

    cout<<endl;
    cout<<"Odd numbers : ";

    for(int k=0; k<n; k++)
    {
        if(arr[k]%2!=0)
        {
            even[k]=arr[k];
            cout<<even[k]<<" ";
        }
    }

    cout<<endl;
    int x=0;
    cout<<"Prime numbers : ";

    for (int k=0; k<n; k++) 
    {
        bool is_prime = true;
        if(arr[k]<=1) 
        {
            is_prime = false;
        } 
        else 
        {
            for(int m=2; m*m<=arr[k]; m++) 
            {
                if(arr[k]%m==0) 
                {
                    is_prime = false;
                    break;
                }
            }
        }
        if(is_prime) 
        {
            prime[x]=arr[k];
            cout<<prime[x]<<" ";
            x++;
        }
    }
}