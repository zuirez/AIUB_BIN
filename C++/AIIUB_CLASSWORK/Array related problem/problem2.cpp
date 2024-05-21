/*

Develop a program that has an array which stores 4 integer numbers and 4 floating point numbers
by asking the user for inputs. The program estimates the summation, average as well as
multiplication of the stored numbers and prints all the results.

*/

#include<iostream>
using namespace std;

int main()
{
    float arr[8];

    cout<<"Enter elements of array : ";
    for(int i=0; i<8; i++)
    {
        cin>>arr[i];
    }

    cout<<"Inputter numbers are : ";

    for(int i=0; i<8; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    float sum=0, avg=0, mult=1;

    for(int i=0; i<8; i++)
    {
        sum=sum+arr[i];
    }
    
    avg=sum/8;

    for(int i=0; i<8; i++)
    {
        mult=mult*arr[i];
    }

    cout<<"Sum : "<<sum<<endl;
    cout<<"Avg : "<<avg<<endl;
    cout<<"Mult : "<<mult<<endl;
}
