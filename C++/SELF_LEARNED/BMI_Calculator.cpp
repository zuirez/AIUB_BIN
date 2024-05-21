#include <iostream>
using namespace std;

int main()
{
    float weight, height, x;
    cout<<"Enter your weight (KG) :";
    cin>>weight;
    
    cout<<"Enter your height (M) :";
    cin>>height;

    x= weight/(height*height);
    cout<<"Your BMI is :"<<x <<endl;

    if (x<18.5)
    
        cout<<"You are underweight.";
    
    else if(18.5<x && x<22.9)
        
        cout<<"You are normal.";
        
    else if(25<x && x<29.9)
            
        cout<<"You are overweight.";
            
    else if(30<x && x<34.9)
                
        cout<<"You are obese.";
                
    else 
        
        cout<<"You are extremely obese.";

}