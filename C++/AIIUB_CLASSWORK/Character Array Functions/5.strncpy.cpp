/*

'strncpy' is a function for manipulating strings, which has 2 functions and a numerical value (string1, string2, value).
This strncpy function will copy string2, but only the specified number of characters (equivalent to the entered value), to string1.

If string1 is of 7 words and the user selects only 3 words from string2,
the chosen 3 words from string2 will be copied and pasted into the first 3 words of string1,
replacing them with the copied value. The remaining 4 letters will remain unchanged.

*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[50] = "Hello World!";
    char s2[50] = "Welcome";

    cout << "Copy : " << strncpy(s2, s1, 3) << endl;
}
