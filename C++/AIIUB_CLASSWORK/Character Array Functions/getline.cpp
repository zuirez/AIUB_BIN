/*

Taking user input and display output (with spaces) Using getline

*/

#include <iostream>
using namespace std;

int main()
{
    char name[50];

    cout<<"Enter your name : ";
    cin.getline(name,50);
    
    cout<<"Name : "<<name;
}