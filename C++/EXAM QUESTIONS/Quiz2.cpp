#include<iostream>
using namespace std;

int main()
{
    int a=1, b=0;
    float arr22[6], arr23[6];
    float counter=0, counter2=0;

    cout<<"Enter bills of 2022 :";
    do
    {
        for(int i=0; i<6; i++)
        {
            cin>>arr22[i];
            counter=counter+arr22[i];
        }
    } 
    while (b>a);

    cout<<"Enter bills of 2023 :";
    while (a>b)
    {
        for(int j=0; j<6; j++)
        {
            cin>>arr23[j];
            counter2=counter2+arr23[j];
            b+=2;
        }
    }
    
    cout<<"Your bills of 2022 is "<<counter<<endl;
    cout<<"Your bills of 2023 is "<<counter2<<endl;
    
    if(counter2>counter)
    {
        cout<<"Your living cost is rising.";
    }
    else
    cout<<"Your living cose is decreasing.";

}