#include<iostream>
using namespace std;

void merge(int L[], int nL, int R[], int nR, int A[])
{
    int i=0, j=0, k=0;

    while (i<nL && j<nR)
    {
        if(L[i]<=R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
        k++;
    }

    while(i<nL)
    {
        A[k] = L[i];
        i++;
        k++;
    }

    while(j<nR)
    {
        A[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int A[], int n)
{
    if(n<2)
        return;

    int mid = n/2;
    int L[mid], R[n-mid];

    for(int i=0; i<mid; i++)
    {
        L[i] = A[i];
    }

    for(int i=mid; i<n; i++)
    {
        R[i-mid] = A[i];
    }

    mergeSort(L, mid);
    mergeSort(R, n-mid);
    merge(L, mid, R, n-mid, A);
}

void printArray(int A[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int A[] = {12,11,13,5,6,7};
    int n = sizeof(A)/sizeof(A[0]);

    cout<<"Given array : ";
    printArray(A, n);

    mergeSort(A,n);

    cout<<"Sorted array : ";
    printArray(A,n);
}