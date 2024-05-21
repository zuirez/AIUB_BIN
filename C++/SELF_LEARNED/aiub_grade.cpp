#include <iostream>
using namespace std;

int main()
{
    int a;

    cout<<"Enter your marks : ";
    cin>>a;

    if(a>=90 && a<=100)
        cout<<"Your grade is A+ CGPA = 4.00";
    
    else if (a>=85 && a<90)
        cout<<"Your grade is A CGPA = 3.75";

    else if (a>=80 && a<85)
        cout<<"Your grade is B+ CGPA = 3.50";

    else if (a>=75 && a<80)
        cout<<"Your grade is B CGPA = 3.25";

    else if (a>=70 && a<75)
        cout<<"Your grade is C+ CGPA = 3.00";

    else if (a>=65 && a<70)
        cout<<"Your grade is C CGPA = 2.75";

    else if (a>=60 && a<65)
        cout<<"Your grade is D+ CGPA = 2.50";

    else if (a>=50 && a<60)
        cout<<"Your grade is D CGPA = 2.25";

    else if (a<50)
        cout<<"Your grade is F CGPA = 0.00";

}