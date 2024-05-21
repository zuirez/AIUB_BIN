#include<iostream>
using namespace std;

void evenodd(string name, string city, int age)
{
    cout<<"My name is "<<name<<", I'm from "<<city<<", I'm "<<age<<" years old.";
}

int main()
{
    string name,city;
    int age;

    cout<<"Enter name, city, age : ";
    getline(cin,name);
    getline(cin,city);
    cin>>age;

    evenodd(name,city,age);
}
