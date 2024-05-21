/*

to find string inside a string

*/

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char S1[50] = "ACBCDZ";
    char S2[3] = "CD";
    cout << "String Search:" << strstr(S1, "BC") << endl;
    cout << "String Search:" << strstr(S1, S2) << endl;
    cout << "String Search:" << strstr(S1, "BCZ") << endl;
}