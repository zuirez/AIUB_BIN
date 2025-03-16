#include <iostream>
using namespace std;

int main()
{
    int size1, size2;
    bool hasCommonElement=false;

    cout<<"Enter size of array a and b : ";
    cin>>size1>>size2;

    int a[size1], b[size2];

    cout<<"Enter elements of array a : ";
    for(int i=0; i<size1; i++)
    {
        cin>>a[i];
    }

    cout<<"Enter elements of array b : ";
    for(int i=0; i<size2; i++)
    {
        cin>>b[i];
    }

    // bool printed[size2] = {false};

    for(int i=0; i<size1; i++)
    {
        for(int j=0; j<size2; j++)
        {
            if(a[i]==b[j]) // && !printed[j]
            {
                hasCommonElement=true;
                cout<<a[i]<<" ";
                //printed[j] = true;
                break;
            }
        }
    }

    if(hasCommonElement==false)
    {
        cout<<"There is no common elements";
    }
}