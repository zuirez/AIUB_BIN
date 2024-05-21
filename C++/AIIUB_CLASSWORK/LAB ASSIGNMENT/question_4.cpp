#include<iostream>
using namespace std;

int main()
{
    int type;
    float total, quantity;
    cout<<"Which type of gold do you want to purchase?"<<endl;
    cout<<"Press 1 for 22-Karat Gold"<<endl;
    cout<<"Press 2 for 24-Karat Gold"<<endl;
    cin>>type;

    switch(type)
    {
        case 1: 
                cout<<"Enter the quantity(gram) of gold that you want to purchase : ";
                cin>>quantity;
                total=6529.4*quantity;

                cout<<"Price of 1 gram of 22-karat gold is 6,529.4 Taka.";
                cout<<"Your total cost is : "<<total<<" Taka.";

                break;

        case 2: 
                cout<<"Enter the quantity(gram) of gold that you want to purchase : ";
                cin>>quantity;
                total=7123.6*quantity;

                cout<<"Price of 1 gram of 24-karat gold is 7,126.6 Taka."<<endl;
                cout<<"Your total cost is : "<<total<<" Taka."<<endl;

                break;

        default : break;
    }

    char a;
    float convert;

    cout<<"Do you want to convert the money in US Dollar?"<<endl;
    cout<<"Press Y for yes and N for no."<<endl;
    cin>>a;

    switch (a)
    {
    case 'y':
    case 'Y': 
                convert=total/110.24;
                cout<<"Total cost : "<<convert<<"USD"<<endl;
                    
                break;

    case 'n':
    case 'N': 
                cout<<"Thank you.";
    
    default: break;
    }

}
