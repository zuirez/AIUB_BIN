#include<iostream>
using namespace std;

int main()
{
    int mat[4][4],mat2[4][4],sum[4][4];

    cout<<"Enter elements of matrix 1 : ";
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin>>mat[i][j];
        }
    }

    cout<<endl;
    cout<<"Enter elements of matrix 2 : ";
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin>>mat2[i][j];
        }
    }

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            sum[i][j]=mat[i][j]+mat2[i][j];
        }
    }

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
}