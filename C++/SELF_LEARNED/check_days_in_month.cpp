#include <iostream>
using namespace std;

int main()
{
    int year, month;

    cout<<"Enter year :";
    cin>>year;

    cout<<"Enter month :";
    cin>>month;

    
    //with if-else statement

    /*if ( year%4==0 && year%100!=0 && month==2 )
        cout<<"29 days month.";

    else if (month==2)
        cout<<"28 days month.";

    else if (month==4 || month==6 || month==9 || month==11)
        cout<<"30 days month.";
    else if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12 )
        cout<<"31 days month.";
    else
        cout<<"Not valid!";
    */


    // with ternary operator

    (year%4==0 && (year%100!=0 && month==2 || year%400==0 && month==2)? 
    cout<<"29 days month.": cout<<"28 days month.";) : ((month==4 || month==6 || month==9 || month==11)? cout<<"30 days month."):
    (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)? cout<<"31 days month.":cout<<"Not Valid!";




    //with switch statement

    /*switch (month)
    {
    case 2: (year%4==0 && year%100!=0 || year%400==0)? cout<<"29 days month.":cout<<"28 days month.";break;

    case 4:
    case 6:
    case 9:
    case 11: cout<<"30 days month.";;break;

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: cout<<"31 days month.";;break;

    
    default: cout<<"Not Valid Input!";
        break;
    }
    */

}