#include<iostream>
using namespace std;

double sum(int min, int max)
{
    if(min==max)
    {
        return max;
    }

    return min+ sum(min+1, max);
}

int main()
{
    double min,max;

    cout<<"Enter minimun range : ";
    cin>>min;
    cout<<"Enter minimun range : ";
    cin>>max;

    cout<<"Sum : "<<sum(min,max);
}
