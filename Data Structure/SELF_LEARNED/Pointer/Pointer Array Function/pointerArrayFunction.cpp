#include <iostream>
using namespace std;

void TwiceArray (int arg[], int length) 
{
    for (int n=0; n<length; n++) 
    arg[n] *= 2;
}

void PrintArray(const int arg[], int length)
{
    for (int n=0; n<length; n++)
    cout<<arg[n];
    cout<<endl;
}

int main ()
{
    int FirstArray[3] = {5, 10, 15};
    int SecondArray[] = {2, 4, 6, 8, 10};

    TwiceArray (FirstArray,3);
    PrintArray (FirstArray,3);
    PrintArray (SecondArray,5);
}