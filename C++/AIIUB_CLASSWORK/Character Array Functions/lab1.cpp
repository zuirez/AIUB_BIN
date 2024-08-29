#include<iostream>
using namespace std;

int main()
{
    string name,id;
    char uni[50], depname[50];

    cout<<"Enter your name : ";
    getline(cin,name);
    
    cout<<"Enter your ID : ";
    cin>>id;

    cout<<"Enter your Uni name : ";
    cin.getline(uni,50);

    cout<<"Enter your dept name : ";
    cin>>depname;

    cout<<"Name : "<<name<<endl;
    cout<<"ID : "<<id<<endl;
    cout<<"Uni name : "<<uni<<endl;
    cout<<"Dept name : "<<depname;
}