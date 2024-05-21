#include<iostream>
using namespace std;

int main()
{
    int match, messi, neymar, totalmessi=0, totalneymar=0;

    cout<<"How many match average do you want to calculate ?"<<endl;
    cin>>match;

    for(int i=0; i<match; i++)
    {
        
        cout<<"Number of goals scored by Lionel Messi in match "<<i+1<<" : ";
        cin>>messi;
        totalmessi=totalmessi+messi;

    }

    for(int j=0; j<match; j++)
    {
        
        cout<<"Number of goals scored by Neymar da Silva Santos Junior in match "<<j+1<<" : ";
        cin>>neymar;
        totalneymar=totalneymar+neymar;

    }

    float avgm= (float)totalmessi/match;
    float avgn= (float)totalneymar/match;

    cout<<"Average goal scored by Lionel Messi is "<<avgm<<endl;
    cout<<"Average goal scored by Neymar da Silva Santos Junior is "<<avgn<<endl;

    if(avgm>avgn)
    {
        cout<<"Lionel Messi is better player.";
    }

    else
    {
        cout<<"Neymar da Silva Santos Junior is better player.";
    }


}