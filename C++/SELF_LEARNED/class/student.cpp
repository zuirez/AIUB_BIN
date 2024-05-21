#include<iostream>
using namespace std;

class student 
{
    public:
        string name;
        string id;
        float cgpa;

    void SetStudentInfo()
    {
        cout<<"Enter your name : ";
        getline(cin,name);
        cout<<"Enter your ID : ";
        getline(cin,id);
        cout<<"Enter your CGPA : ";
        cin>>cgpa;
        cin.ignore();
    } 

    void GetStudentInfo()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"ID : "<<id<<endl;
        cout<<"CGPA : "<<cgpa<<endl;
    }
};

int main()
{
    int n;

    cout<<"How many student info do you want to input?"<<endl;
    cin>>n;
    cin.ignore();
    for(int i=0; i<n; i++)
    {
        student s;
        s.SetStudentInfo();
        s.GetStudentInfo();
    }
}
