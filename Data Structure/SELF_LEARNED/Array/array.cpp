#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    //declaration of array
    int arr[5] = {1, 2, 3, 4, 5};


    int arr2[5] = {1, 2}; //partially initialized, rest of the index will be initialized by 0


    int arr3[5] = {0}; //all index will be initialized by 0
    

    int arr4[] = {1, 2, 3, 4, 5}; //size of the array will be determined by the number of elements
    

    int arr5[5]; //declaration of array without initialization

    for(int i = 0; i < 5; i++) //initialization of array
    {
        arr5[i] = i + 1;
    }
}