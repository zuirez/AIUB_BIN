#include <iostream>
#include <algorithm>
using namespace std;

void countingSort(int A[], int B[], int n, int k) 
{
    // Step 1: Initialize the count array C with zero values
    int C[k + 1] = {0};  // C array of size k+1 initialized to 0

    // Step 2: Count the occurrences of each element in A[] and store in C[]
    for (int j = 0; j < n; j++) 
    {
        C[A[j]] = C[A[j]] + 1;  // Increment count for the value A[j]                                                                                                                                       
    }

    // Step 3: Modify C[] to store cumulative sums
    for (int i = 1; i <= k; i++) 
    {
        C[i] = C[i] + C[i - 1];  // C[i] holds the number of elements <= i
    }

    // Step 4: Build the output array B[] in sorted order
    for (int j = n - 1; j >= 0; j--) 
    {
        B[C[A[j]] - 1] = A[j];  // Place A[j] at the correct position in B[]
        C[A[j]] = C[A[j]] - 1;  // Decrease the count of A[j] in C[]
    }
}

int main() 
{
    int A[] = {4, 2, 2, 8, 3, 3, 1};  // Input array
    int n = sizeof(A) / sizeof(A[0]);  // Size of input array
    int k = 8;  // Maximum element in the array (range of input)
    int B[n];  // Output array to store sorted elements

    countingSort(A, B, n, k);

    // Print the sorted array
    for (int i = 0; i < n; i++) 
    {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}