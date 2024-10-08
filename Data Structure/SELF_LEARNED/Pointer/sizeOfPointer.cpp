#include <iostream>
using namespace std;

int main()
{
    int a=5; 

    //Storing the value of a in a pointer
    int *ptr = &a;

    //Size of int
    cout<<"Size of int a : "<<sizeof(a)<<endl;

    //Size of pointer
    cout<<"Size of pointer : "<<sizeof(ptr)<<endl;
}