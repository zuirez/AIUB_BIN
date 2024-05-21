/*

`strcpy` is a copying function that has 2 parameters (string1, string2). 
This `strcpy` function will copy string2 and paste it into string1.

*/

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s1[50] = "Hello World!";
    char s2[50] = "Welcome";

    cout << "Copy : " << strcpy(s2, s1) << endl;
}