#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {10,11,12,13,14,15,16,17,18,19};

    cout<<"Address of first memory block of array : "<<arr<<endl;

    cout<<"Address of first memory block of array : "<<&arr[0]<<endl;
}