#include<iostream>
using namespace std;

int main()
{
    struct student
    {
        string name;
        string sub;
        int age;
    };

    student student1;

    cout<<"Enter student 1 age, name and subject :";
    cin>>student1.age;
    cin>>student1.name;
    cin>>student1.sub;

    student student2;
    
    cout<<"Enter student 2 age, name and subject :";
    cin>>student2.age;
    cin>>student2.name;
    cin>>student2.sub;
    
    cout<<"Student 1 name, age and subject is : "<<student1.name<<", "<<student1.age<<", "<<student1.sub<<endl;
    cout<<"Student 2 name, age and subject is : "<<student2.name<<", "<<student2.age<<", "<<student2.sub<<endl;
}
