#include <iostream>
using namespace std;

void print(int *p)
{
    cout<<"Printing the value of a : "<< *p <<endl;
}

int main()
{
    int a = 5;
    int *p = &a;

    print(p);
}