/*

The 'strncmp' function compares string 1 and string 2 based on the ASCII values of their characters only for the selected numbers.

If string1 is greater than string2, the output would be 1.
If string1 is less than string2, the output would be -1.
If string1 is equal to string2, the output would be 0.

*/

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char S1[50] = "ABCDZ";
    char S2[50] = "ABEDX";
    cout << "Compare:" << strncmp(S1, S2, 2) << endl;
    cout << "Compare:" << strncmp(S1, S2, 4) << endl;
}
