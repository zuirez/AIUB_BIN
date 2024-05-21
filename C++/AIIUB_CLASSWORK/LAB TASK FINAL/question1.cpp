#include<iostream>
using namespace std;

int main()
{
    int arr[4][5];

    cout<<"Enter elements of array : ";

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Inputted array : "<<endl;

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int max=0;

    for(int i=0; i<1; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
    }

    cout<<"Maximum number in Row 1 : "<<max<<endl;

    int b=arr[1][1], min=0;

    for(int i=1; i<2; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(arr[i][j]<b)
            {
                min=arr[i][j];
                b=min;
            }
        }
    }

    cout<<"Minimum number in Row 2 : "<<min<<endl;

    cout<<"Even numbers in Row 3 : ";

    for(int i=2; i<3; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(arr[i][j]%2==0)
            {
                cout<<arr[i][j]<<" ";
            }
        }
    }
    cout<<endl;

    cout<<"Prime numbers in Row 4 : ";

    for(int i=3; i<4; i++)
    {
        for(int j=0; j<5; j++)
        {
            int num = arr[i][j];
            bool prime = true;
 
            if(num <= 1) 
            {
                prime = false;
            }

            else 
            {
                for(int j=2; j*j<=num; j++) 
                {
                    if(num%j==0) 
                    {
                        prime = false;
                        break;
                    }
                }
            
                if(prime) 
                {
                    cout << num << " ";
                }
            }   
        }
    }
}
