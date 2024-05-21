#include <iostream>
using namespace std;

int main()
{
    string w1,w2;

    cout<<"Enter a word : ";
    cin>>w1;

    for (int i=w1.size()-1; i>=0; i--)
    {
        w2=w2+w1[i];
    }

    cout<<"The reversed form of the string : "<<w2<<endl;

    if(w1==w2)
    {
        cout<<w1<<" is a Palindrome."<<endl;
    }

    else
    {
        cout<<w1<<" is not a Palindrome."<<endl;
    }
}