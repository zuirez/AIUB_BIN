/*

Write a c++ program for a supershop
1. take user input of daily sell amount in taka 
2. prints weekly total sell amount
3. prints daily average sell amount
4. count days of below average sell
5. if the total sell amount of the week is less then or equal to 10000 taka then print Target achieved otherwise print Target not achieved

*/

#include<iostream>
using namespace std;

int main()
{
    float arr[7],total=0,avg;
    int a=1;

    cout<<"Enter daily sell amount : "<<endl;
    for(int i=0; i<7; i++)
    {
        cout<<"Day "<<a<<" : ";
        cin>>arr[i];
        a++;
    }

    for(int j=0; j<7; j++)
    {
        total=total+arr[j];
    }

    cout<<"Total weekly sell amount : "<<total<<endl;
    avg=total/7;

    cout<<"Average sell amount : "<<avg<<endl;

    int count=0;

    for(int k=0; k<7; k++)
    {
        if(arr[k]<=avg)
        {
            count++;
        }
    }

    cout<<"Count of below avg days : "<<count<<endl;

    if(total>=10000)
    {
        cout<<"Target achieved"<<endl;
    }
    else
    {
        cout<<"Target not achieved";
    }
}