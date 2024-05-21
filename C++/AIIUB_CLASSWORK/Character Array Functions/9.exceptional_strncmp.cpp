/*

nomally strncmp show 1,-1,0 when s1 is greater, less or equal
But if we select the value 1 to compare the first words of the strings
it will show the ascii difference too.

*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char S1[50] = "ABCDZ";
    char S2[50] = "DBEDX";
    cout << "Exceptional Compare:" << strncmp(S1, S2, 1) << endl;
    cout << "Exceptional Compare:" << strncmp(S2, S1, 1) << endl;
}