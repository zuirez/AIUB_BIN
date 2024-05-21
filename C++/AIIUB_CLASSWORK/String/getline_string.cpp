/*

Taking user input and display output (with spaces) Using getline

*/

#include<iostream>
using namespace std;

int main()
{
    string name;

    cout<<"Enter your name : ";
    getline(cin, name);

    cout<<"Name : "<<name;
}