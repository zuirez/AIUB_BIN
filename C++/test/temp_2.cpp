#include<iostream>
using namespace std;

void StringSearch(string Name, string flower[8])
{
    bool isflower=true;

    for(int i=0; i<8; i++)
    {
        if(Name==flower[i])
        {
            isflower=false; break;
        }
    }

    if(isflower==false)
    {
        cout<<"The flower name is present in the array."<<endl;
    }
    else
    {
        cout<<"The flower name is present in the array."<<endl;
    }
}

int main()
{
    string Name, flower[8];

    cout<<"Enter flowers name : ";
    
    for(int i=0; i<8; i++)
    {
        cin>>flower[i];
    }

    cout<<"Enter a flower name you want to search in the array : ";
    cin>>Name;

    StringSearch(Name, flower);
}
