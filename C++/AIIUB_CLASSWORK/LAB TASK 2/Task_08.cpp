#include <iostream>
using namespace std;

int main()
{
    float p,t,d;

    cout<<"!!-- 1 page photocopy price 2.33 taka --!!"<<endl;
    cout<<"Enter how many pages do you want to photocopy :";
    cin>>p;

    t=p*2.33;

    if(t>100)
    {
        d=t-(t*4/100);
        cout<<"You have to pay "<<d<<" taka";
    }

    else
        cout<<"You have to pay "<<t<<" taka";
}
