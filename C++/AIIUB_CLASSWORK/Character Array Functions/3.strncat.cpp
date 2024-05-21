/*

'strcat' is a function to add 2 string togather but it will only add the selected numbers of characters and add it togather.

here s2's frist 3 values will be added to s1 and be saved and print

*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[50] = "Hello World!";
    char s2[50] = "Welcome";

    cout << "Concatenation : " << strncat(s1,s2,3) << endl;
}