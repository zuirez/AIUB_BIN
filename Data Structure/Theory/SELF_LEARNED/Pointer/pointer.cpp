#include <iostream>
using namespace std;

int main()
{
    int a=5; 
    
    //Printing the value of a 
    cout<<"Value of a : "<<a<<endl;

    //Printing the address of a
    cout<<"Address of a : "<<&a<<endl;


    //Storing the value of a in a pointer
    int *ptr = &a;

    //Printing the value of a using pointer
    cout<<"Value of a using pointer : "<<*ptr<<endl;

    //Printing the address of a using pointer>
    cout<<"Address of a using pointer : "<<ptr<<endl;

    //Size of int
    cout<<"Size of int a : "<<sizeof(a)<<endl;

    //Size of pointer
    cout<<"Size of pointer : "<<sizeof(ptr)<<endl;
}