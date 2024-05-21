#include<iostream>
using namespace std;

int main()
{
    float arr[3];

    cout<<"Enter your marks in physics : ";
    cin>>arr[0];
    cout<<"Enter your marks in chemistry : ";
    cin>>arr[1];
    cout<<"Enter your marks in math : ";
    cin>>arr[2];

    for(int i=0; i<3; i++)
    {
        if(i==0)
        cout<<"Your physics grade is ";
        else if(i==1)
        cout<<"Your chemistry grade is ";
        else if(i==2)
        cout<<"Your math grade is ";

        if(arr[i]<0 || arr[i]>100)
            cout<<"Invalid input."<<endl;

        else if(arr[i]>=80 && arr[i]<=100)
            cout<<"A+"<<endl;
    
        else if (arr[i]>=70 && arr[i]<80)
            cout<<"A"<<endl;

        else if (arr[i]>=60 && arr[i]<70)
            cout<<"B+"<<endl;

        else if (arr[i]>=50 && arr[i]<60)
            cout<<"B"<<endl;

        else if (arr[i]<50)
            cout<<"F"<<endl;

    }
}