#include <iostream>
using namespace std;

int main()
{
    int n, i,*ptr, sum=0;
    cout << "Number of elements : ";
    cin >> n;

    ptr = new (nothrow) int[n]; // nothrow ensures that the new operator returns nullptr (instead of throwing an exception) if it fails to allocate memory.

    if(ptr==NULL) //ptr==0
    { 
        cout << "Error! not allocated.";
        return 1;
    }

    cout << "Enter elements:\n";
 
    for(i=0;i<n;++i)
    {
        cin >> *(ptr+i); //ptr[i]
        sum += *(ptr+i);
    }
 
    cout << "Sum = " << sum;
    
    delete [] (ptr); //memory de-allocated
}
