#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout<<"Enter "<<n<<" elements: "<<endl;
    for (int i=0; i<n; i++) 
    {
        cin>>arr[i];
    }

    for (int i=0; i<n-1; i++) 
    {
        for (int j=0; j<n-i-1; j++) 
        {
            if (arr[j] > arr[j+1]) 
            {
                int key = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = key;
            }
        }
    }

    cout<<"Sorted array : "<<endl;
    for (int i=0; i<n; i++) 
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}
