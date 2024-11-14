/*

'strchr' function will search a word in string.

*/

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char S1[50] = "ABCDZ";
    char s2[50] = "ACBCDZ";
    char var = 'D';

    cout << "Character Search:" << strchr(S1, 'C') << endl;
    cout << "Character Search:" << strchr(s2, 'C') << endl;
    cout << "Character Search:" << strchr(S1, var) << endl;
}