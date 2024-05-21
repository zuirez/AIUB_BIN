/*

'strcat' is a function to add 2 string togather

*/

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s1[50] = "Hello World!";
    char s2[50] = "Welcome";

    cout << "Concatenation : " << strcat(s1,s2) << endl;
}