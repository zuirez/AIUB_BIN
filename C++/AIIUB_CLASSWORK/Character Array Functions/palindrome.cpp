#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int length;
    cout<<"Enter the length of the string:";
    cin>>length;
    char S1[length], S2[length];
    cout<<"Enter the string:";
    for(int i=0; i<length; i++){
        cin>>S1[i];
    }
    cout<<"Inputted string:"<<S1<<endl;
    int Size=length-1;
    //Apple Size=4 i=4 S2[4-4]=S1[4]; i=3 S2[4-3]=S1[3]; i=2 S2[4-2]=S1[2]
    for(int i=Size; i>=0; i--){
        S2[Size-i] = S1[i];
    }
    cout<<"Reversed string:"<<S2<<endl;
 
    if(strcmp(S1,S2)==0){
        cout<<"Inputted string is palindrome"<<endl;
    }
    else{
        cout<<"Inputted string is not palindrome"<<endl;
    }
}
