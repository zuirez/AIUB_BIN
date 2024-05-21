/*

Declaring Strings

*/

#include<iostream>
using namespace std;

int main()
{
    string flower[5]={"Rose", "Lily", "Sun flower", "Orchid", "Lotus"};
    cout<<"Stored flowers : ";

    for(int i=0; i<5; i++)
    {
        cout<<flower[i]<<", ";
    }
}