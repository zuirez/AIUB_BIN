#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {10,11,12,13,14,15,16,17,18,19};

    //incrementing value
    cout<<"Value before increment : "<<*arr<<endl;
    cout<<"Value after increment : "<<*arr+1<<endl;

    //incrementing address
    cout<<"Address before increment : "<<&arr[0]<<endl;
    cout<<"Address after increment : "<<&arr[0]+1<<endl;
}