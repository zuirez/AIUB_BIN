#include <iostream>
using namespace std;

int main()

{
    char ch;

    cout<<"Enter your gender (F/M) :";
    cin>>ch;

    if(ch=='f' || ch=='F')
        cout<<"Your are Female.";

    else if(ch=='m' || ch=='M')
        cout<<"You are Male";
        
    else
        cout<<"Undefined.";

}