#include<iostream>
using namespace std;

struct studentinfo
{
    string name;
    string id;
    float cgpa;
    int age;

    void input()
    {
        cout<<"Enter name: ";
        getline(cin,name);
        cout<<"Enter id: ";
        cin>>id;
        cout<<"Enter cgpa: ";
        cin>>cgpa;
        cout<<"Enter age: ";
        cin>>age;
        cin.ignore();
    }

    void output()
    {
        cout<<"Enter name: "<<name<<endl;
        cout<<"Enter id: "<<id<<endl;
        cout<<"Enter cgpa: "<<cgpa<<endl;
        cout<<"Enter age: "<<age<<endl;
    }
};

int main()
{
    studentinfo s1;
    studentinfo s2;

    s1.input();
    s2.input();

    cout<<"Student INFO....";
    s1.output();
    s2.output();
}
