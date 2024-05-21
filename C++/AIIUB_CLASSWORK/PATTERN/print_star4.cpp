#include<iostream>
using namespace std;

int main()
{
    for(int i=0; i<5; i++)
    {
        for(int j=i; j>0; j--)
        {
            cout<<" ";
        }

        for(int k=5-i; k>0; k--)
        {
            cout<<"*";
        }

        cout<<endl;
    }
}