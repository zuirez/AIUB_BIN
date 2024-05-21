/*

To take spaces inside a string or a character array (user input) we use getline (built in function)

*/

#include<iostream>
using namespace std;

int main()
{
    string name,id;
    char uni[50], dep[50];

    cout<<"Enter your name : ";
    getline(cin, name);

    cout<<"Enter your ID : ";
    getline(cin, id);
    
    cout<<"Enter your uni name : ";
    cin.getline(uni, 50);

    cout<<"Enter your dept name : ";
    cin.getline(dep, 50);
    
    cout<<"Name : "<<name<<endl;
    cout<<"ID : "<<id<<endl;
    cout<<"UNI : "<<uni<<endl;
    cout<<"Dept : "<<dep;
}
