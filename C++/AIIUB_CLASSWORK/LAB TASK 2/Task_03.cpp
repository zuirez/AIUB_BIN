#include <iostream>
using namespace std;

int main()
{
    float num;
    cin >> num;

    if (num - (int)num == 0)
    {
        cout << "This is an integer type number." << endl;
    }
    else
    {
        cout << "This is a float type number." << endl;
    }
    return 0;
}



/*

int main()
{
    float a;

    cout<<"Enter a number :";
    cin>>a;

    if(a-(int)a==0)
        cout<<a<<" is integer number.";
        
    else
        cout<<a<<" is float number.";
}

*/

