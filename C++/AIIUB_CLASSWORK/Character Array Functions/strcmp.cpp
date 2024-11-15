/*

The 'strcmp' function compares string 1 and string 2 based on the ASCII values of their characters.

If string1 is greater than string2, the output would be 1.
If string1 is less than string2, the output would be -1.
If string1 is equal to string2, the output would be 0.

*/

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s1[50] = "z";
    char s2[50] = "a";

    cout << "Compare : " << strcmp(s1,s2) << endl;
    cout << "Compare : " << strcmp(s2,s1) << endl;
    cout << "Compare : " << strcmp(s1,s1) << endl;
}
