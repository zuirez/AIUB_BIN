/*

Develop a program that stores your Name and ID using two different arrays and displays your
information at the end.

*/

#include<iostream>
using namespace std;

int main()
{
    char name[50];
    char id[50];

    cout<<"Enter your name : ";
    cin.getline(name,50);

    cout<<"Enter your ID : ";
    cin.getline(id,50);

    cout<<"Name : "<<name<<endl;
    cout<<"ID : "<<id<<endl;

}
