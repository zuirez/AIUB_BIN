#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int k, i, n=5, mimo[10]={2, 3, 5, 6, 7}; //partial initialization; n=total elements
    
    mimo[n++] = 8; // insert value 8 at the array; increase n; n=6
    


    /* insert value 1 at the beginning of array */
    
    for(i=n; i>0; i--) //shift all the values one index forward.
    {
        mimo[i] = mimo[i-1];
    }
    
    mimo[0] = 1; //1 is inserted at index 1
    
    n++; // n increases; n=7
    


    // insert value 4 in the middle (index k=3) of the array
    
    k = 3;
    
    for(i=n; i>k; i--) //shift all the values one index forward.
    {
        mimo[i] = mimo[i-1];
    }
    
    mimo[k] = 4; //4 is inserted at index k;
    n++; //n increases; n=8
    
    for(i=0; i<n; i++) //printing all the values in the array after insert
    
    cout << mimo[i]<<" "; 

}