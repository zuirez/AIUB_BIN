#include<iostream>
using namespace std;

int main()
{
    struct
    {   
        int age;
        string name;
    }test;

    cout<<"Enter age and name :";
    cin>>test.age;
    getline(cin,test.name);

    cout<<"Name : "<<test.name<<endl;
    cout<<"Age : "<<test.age;
}
