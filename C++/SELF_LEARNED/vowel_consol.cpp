#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout<<"Enter a character : ";
    cin>>ch;

    ch= tolower(ch);

    switch (ch)
    {
        case 'a': 
        case 'e':
        case 'i': 
        case 'o': 
        case 'u': cout<<"Its a vowel"; break;

        default: 
        
        if(ch>='a' && ch<='z')
        cout<<"Its consonant";

        else 
        cout<<"Not a character.";

        break;


    }

}