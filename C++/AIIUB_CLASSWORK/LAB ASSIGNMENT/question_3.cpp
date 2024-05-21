#include<iostream>
using namespace std;

int main()
{
    float salary, quantity, annual, sold, bonus, quantity2, togetbonus;

    cout<<"What is your monthly salary? "<<endl;
    cin>>salary;
    cout<<"Quantity of mangoes you sold in 2022 :";
    cin>>quantity;

    annual=salary*12;

    cout<<"Your annual salary is : "<<annual<<" Taka"<<endl;

    sold=quantity*350;

    cout<<"You sold "<<quantity<<" KG of mangos in 2022, which cost "<<sold<<" Taka."<<endl;

    if(sold>15000)
    {
        bonus=annual+(annual*0.24);
        cout<<"You received a 24% annual bonus. Your annual salary with bonus is : "<<bonus<<endl;
    }

    else
    {
        togetbonus=(15001-sold);
        quantity2=togetbonus/350;
        cout<<"To get bonus you needed to sold "<<quantity2<<" KG more mangoes which cost "<<togetbonus<<" Taka.";

    }
}