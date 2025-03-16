#include<iostream>
using namespace std;

void oddNumbers(int start, int end)
{
    cout<<"Starting value: "<<start<<endl;
    cout<<"Ending value: "<<end<<endl;

    for(int i=start; i<=end; i++)
    {
        if(i%2!=0)
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
    int start, end;

    cout<<"Enter a range of number."<<endl;

    cout<<"Enter a starting point : ";
    cin>>start;

    cout<<"Enter a ending point : ";
    cin>>end;

    oddNumbers(start,end);
}