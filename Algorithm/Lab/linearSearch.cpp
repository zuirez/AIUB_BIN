#include <iostream>
using namespace std;

int main() 
{
    // Sample array
    int arr[] = {5, 3, 8, 6, 2, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    // Ask the user for the number to search
    cout << "Enter the number to search: ";
    cin >> target;

    // Linear search implementation directly in the main function
    int result = -1;
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == target) 
        {
            result = i; // Store index if found
            break; // Exit loop once the element is found
        }
    }

    // Output the result
    if (result != -1) 
    {
        cout << "Element " << target << " found at index " << result << endl;
    } 
    else 
    {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}