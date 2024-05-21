/*

a is a variable where 5 is stored. Now if we want to know the location of a in memory we can find it by &a. 
And also using pointer. So to use pointer we need to declare a pointer. int *p 
(here we have to put a * before the name of the pointer because int p means declaring a new variable) *p means *p=a
it just store the value of a. To store the location we have to assign the location to this p pointer just by writing 
p=&a. Now the location of a is stored in p. 

Note : p means the location of a where *p means the value of a

We can both access and modify the value of a using pointer.

*/

#include<iostream>
using namespace std;

int main()
{
    int a=5;
    int *p=&a;

    cout<<"Value of a           : "<<a<<endl;
    cout<<"Address of a         : "<<&a<<endl;
    cout<<"Value of a using p   : "<<*p<<endl;
    cout<<"Address of a using p : "<<p<<endl;
    cout<<"Address of p         : "<<&p<<endl;
    cout<<"Current value of a   : "<<a<<endl;
    *p=10;
    cout<<"*p=10 value of a     :"<<a<<endl;
}
