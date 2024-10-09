#include <iostream>
using namespace std;

int main()
{
    int a=5; 
    
    //creating a null pointer
    int *p=0;

    //assigning address of a to the pointer
    p = &a;

    //Printing the value of a using pointer
    cout<<"Value of a using pointer : "<<*p<<endl;

    //Printing the address of a using pointer>
    cout<<"Address of a using pointer : "<<p<<endl;
}