#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int k, i, n=8, mimo[10]={1, 2, 3, 4, 5, 6, 7, 8}; //n=total elements.
    
    n--; // Deleting the last element of the array. Decrease n; last element 8 is no longer part of list.
    
    

    /* delete value 1 from the beginning of array. */

    n--; // deleting the value 1 will decrease the total elements n by one.
    
    
    for(i=0; i<n; i++)  //shift all the values one index backward.
    {
        mimo[i] = mimo[i+1];
    }
    
    k = 2; // delete value 4 from the middle (index k=2) of the array
    
    n--;         // deleting the value 4 will decrease the total elements n by one.
    
    for(i=k; i<n; i++) //shift all the values one index forward. i.e. the value
    {
        mimo[i] = mimo[i+1];
    }
    
    for(i=0; i<n; i++) //printing all the values in the array after insert
    
    cout<<mimo[i]<<" "; 
}