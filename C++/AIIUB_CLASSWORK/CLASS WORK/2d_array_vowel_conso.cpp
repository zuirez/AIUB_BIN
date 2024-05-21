#include<iostream>
using namespace std;

int main()
{
    char arr[3][3];

cout<<"Enter elements of array : ";
for(int i=0; i<3; i++)
{
    for(int j=0; j<3; j++)
    {
        cin>>arr[i][j];
    }
}

cout<<"Elements of array : "<<endl;
for(int i=0; i<3; i++)
{
    for(int j=0; j<3; j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

cout<<endl;
for(int i=0; i<3; i++)
{
    for(int j=0; j<3; j++)
    {
        if(arr[i][j]=='a'|| arr[i][j]=='e'|| arr[i][j]=='i'|| arr[i][j]=='o'|| arr[i][j]=='u'|| arr[i][j]=='A'|| arr[i][j]=='E'|| arr[i][j]=='I'|| arr[i][j]=='O'|| arr[i][j]=='U')
        {
            cout<<arr[i][j]<<" is vowel."<<endl;
        }

        else
        {
            cout<<arr[i][j]<<" is consonent."<<endl;
        }
    }
}

}
