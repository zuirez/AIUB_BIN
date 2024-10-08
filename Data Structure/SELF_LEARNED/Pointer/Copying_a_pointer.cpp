#include <iostream>
using namespace std;

int main()
{
    int a=5; 

    //Storing the value of a in a pointer
    int *ptr = &a;

    //copying ptr to q pointer
    int *q = ptr;

    cout<<"Value of a : "<<*q<<endl;

    cout<<"Address of a : "<<q<<endl;
}