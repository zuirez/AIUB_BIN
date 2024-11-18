#include<iostream>
using namespace std;

void forAplus(float mid)
{
    float x=0;
    x=(90-(mid*0.4))/0.6;
    if(x==int(x))
    {
        cout<<endl<<"To score A+ you have to get "<<x<<" marks in your final exam."<<endl<<endl;
    }
    else
    {
        cout<<endl<<"To score A+ you have to get "<<int(x+1)<<" marks in your final exam."<<endl<<endl;
    }
}

void forA(float mid)
{
    float x=0;
    x=(85-(mid*0.4))/0.6;
    if(x==int(x))
    {
        cout<<endl<<"To score A you have to get "<<x<<" marks in your final exam."<<endl<<endl;
    }
    else
    {
        cout<<endl<<"To score A you have to get "<<int(x+1)<<" marks in your final exam."<<endl<<endl;
    }
}

void forBplus(float mid)
{
    float x=0;
    x=(80-(mid*0.4))/0.6;
    if(x==int(x))
    {
        cout<<endl<<"To score B+ you have to get "<<x<<" marks in your final exam."<<endl<<endl;
    }
    else
    {
        cout<<endl<<"To score B+ you have to get "<<int(x+1)<<" marks in your final exam."<<endl<<endl;
    }
}

void forB(float mid)
{
    float x=0;
    x=(75-(mid*0.4))/0.6;
    if(x==int(x))
    {
        cout<<endl<<"To score B you have to get "<<x<<" marks in your final exam."<<endl<<endl;
    }
    else
    {
        cout<<endl<<"To score B you have to get "<<int(x+1)<<" marks in your final exam."<<endl<<endl;
    }
}

void forCplus(float mid)
{
    float x=0;
    x=(70-(mid*0.4))/0.6;
    if(x==int(x))
    {
        cout<<endl<<"To score C+ you have to get "<<x<<" marks in your final exam."<<endl<<endl;
    }
    else
    {
        cout<<endl<<"To score C+ you have to get "<<int(x+1)<<" marks in your final exam."<<endl<<endl;
    }
}

void forC(float mid)
{
    float x=0;
    x=(65-(mid*0.4))/0.6;
    if(x==int(x))
    {
        cout<<endl<<"To score C you have to get "<<x<<" marks in your final exam."<<endl<<endl;
    }
    else
    {
        cout<<endl<<"To score C you have to get "<<int(x+1)<<" marks in your final exam."<<endl<<endl;
    }
}

void forDplus(float mid)
{
    float x=0;
    x=(60-(mid*0.4))/0.6;
    if(x==int(x))
    {
        cout<<endl<<"To score D+ you have to get "<<x<<" marks in your final exam."<<endl<<endl;
    }
    else
    {
        cout<<endl<<"To score D+ you have to get "<<int(x+1)<<" marks in your final exam."<<endl<<endl;
    }
}

void forD(float mid)
{
    float x=0;
    x=(50-(mid*0.4))/0.6;
    if(x==int(x))
    {
        cout<<endl<<"To score D you have to get "<<x<<" marks in your final exam."<<endl<<endl;
    }
    else
    {
        cout<<endl<<"To score D you have to get "<<int(x+1)<<" marks in your final exam."<<endl<<endl;
    }
}

void topass(float mid)
{
    float x=0;
    x=(50-(mid*0.4))/0.6;
    if(x==int(x))
    {
        cout<<endl<<"To pass you have to get "<<x<<" marks in your final exam."<<endl<<endl;
    }
    else
    {
        cout<<endl<<"To pass you have to get "<<int(x+1)<<" marks in your final exam."<<endl<<endl;
    }
}

int main()
{
    float mid;
    int option;

    cout <<endl<< "       AIUB's Grading System   " << endl << endl;
    cout << "   Number" << "      " << "Letter Grade" << "   " << "Grade Point" << endl
       << "  90 - 100 " << "   " << "     A+     " << "   " << "    4.00   " << endl
       << "  85 -< 90 " << "   " << "     A      " << "   " << "    3.75   " << endl
       << "  80 -< 85 " << "   " << "     B+     " << "   " << "    3.50   " << endl
       << "  75 -< 80 " << "   " << "     B      " << "   " << "    3.25   " << endl
       << "  70 -< 75 " << "   " << "     C+     " << "   " << "    3.00   " << endl
       << "  65 -< 70 " << "   " << "     C      " << "   " << "    2.75   " << endl
       << "  60 -< 65 " << "   " << "     D+     " << "   " << "    2.50   " << endl
       << "  50 -< 60 " << "   " << "     D      " << "   " << "    2.25   " << endl
       << "      < 50 " << "   " << "     F      " << "   " << "    0.00   " << endl;   

    cout<<endl<< "Enter your Mid marks : ";
    cin>>mid;
    
    cout<<"1. For A+ type 1"<<endl
        <<"2. For A type 2"<<endl
        <<"3. For B+ type 3"<<endl
        <<"4. For B type 4"<<endl 
        <<"5. For C+ type 5"<<endl
        <<"6. For C type 6"<<endl
        <<"7. For D+ type 7"<<endl
        <<"8. For D type 8"<<endl
        <<"9. To pass type 9"<<endl<<endl<<endl 
        <<"Which grade do you want to get?"<<endl
        <<"Type a number :";
        cin>>option;

    switch (option)
    {
        case 1: forAplus(mid); break;
        case 2: forA(mid); break;
        case 3: forBplus(mid); break;
        case 4: forB(mid); break;
        case 5: forCplus(mid); break;
        case 6: forC(mid); break;
        case 7: forDplus(mid); break;
        case 8: forD(mid); break;
        case 9: topass(mid); break;
    
        default: cout<<"Select a number between 1 to 9"; break;
    }
   cout<<"Best of luck for your exam."<<endl<<"Hard work always pays off."<<endl<<"DO IT NOW"<<endl<<endl;
}
