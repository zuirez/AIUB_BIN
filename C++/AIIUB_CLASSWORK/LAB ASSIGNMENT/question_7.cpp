#include<iostream>
using namespace std;

int main()
{
    int array[4], sum=0;
    float avg, avg2;

    cout<<"Enter total runs of your favorite cricket player in last 4 ODI matches : ";

    for(int i=0; i<4; i++)
    {
        cin>>array[i];    
        sum=sum+array[i]; 
    }

    avg=sum/4;
    cout<<"average run is : "<<avg<<endl;

    cout<<"What was the average run of your favorite player in 2022 : "<<endl;
    cin>>avg2;
    
    if(avg>avg2)
    {
        cout<<"The performance of the player is improving"<<endl;
    }
    else
    {
        cout<<"The performance of the player is deteriorating."<<endl;
    }

}