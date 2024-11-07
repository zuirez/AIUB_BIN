#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int mimo[10] = {32,4,5,12,15,54,6,23,3,55};

    int n;

    cout<<"Enter the number you want to search: "<<endl;

    cin>>n;

    for(int i=0; i<10; i++)
    {
        if(n == mimo[i])
        {
            cout<<"The number "<<n<< " is found in index "<<i<<" of the array."<<endl;
            break;
        }
    }
}