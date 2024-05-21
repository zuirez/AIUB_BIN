#include <iostream>
#include <math.h>
using namespace std;

int main()

{
   int a,b,z;

   cout<<"Enter a value :";
   cin>>a;
   cout<<"Enter b value :";
   cin>>b;
   z= pow(a,2)+pow(b,2)+2*a*b;

   
   cout<<"(a+b)^2 is =" <<z;
   return 0;
   
}