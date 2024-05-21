#include<iostream>
using namespace std;

//pre-increment
int main()
{
    int a=2;
    int b=++a;

    cout<<"a:"<<a<<"\nb:"<<b;
}


//post-increment
int main()
{
    int a=2;
    int b=a++;

    cout<<"a:"<<a<<"\nb:"<<b;
}


//practice
int main()
{
    int a=6;
    int b=a++;

    cout<<"a:" <<a<<endl;
    cout<<"b:" <<b<<endl;

    a--;

    int c=--a;

    cout<<"a:" <<a <<endl;
    cout<<"c:" <<c <<endl;
}


//practice 
int main()
{
    int a=5;

    cout<<"a:" <<++a<<endl;
    cout<<"a:" <<a<<endl;
}


//practice
int main()
{
    int a=5;

    cout<<"a:" <<a++ <<endl;
    cout<<"a:" <<a <<endl;
}


//practice 
int main()
{
    float a=5.6;
    int b=a;
    float c=2.2;

    c++;

    a=--b;

    b=c--;

    cout<<"a:"<<a++;
    cout<<"b:"<<++b;
    cout<<"a:"<<a;
    cout<<"c:"<<c;

}


//practice
#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 7;
    int z = 0;

    z = x++ + ++y;
    y = ++x + y--;
    x = x + y + z;

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;

    return 0;
}