/*

Write a C++ program which will ask six students to input their ID and CGPA. 
Now store the cgpa of the students using an array. If the student’s cgpa is below 2.50, 
then the program will print that “The student is a probation student”, 
if the student’s cgpa is above 2.49 and below 3.85, 
then the program will print “The student is a regular student”, 
if the student’s cgpa is greater than 3.84, then the program will print “The student is a scholarship student”.  

*/

#include<iostream>
using namespace std;

int main()
{
    int id[6];
    float cgpa[6];
    
    for(int i = 0; i < 6; i++)
    {
        cout << "Enter your ID: ";
        cin >> id[i];

        cout << "Enter your CGPA: ";
        cin >> cgpa[i];

        if (cgpa[i] < 2.50)
        {
            cout << "The student is a probation student" << endl;
        }
        else if (cgpa[i] > 2.49 && cgpa[i] < 3.85)
        {
            cout << "The student is a regular student" << endl;
        }
        else if(cgpa[i]>3.85)
        {
            cout << "The student is a scholarship student" << endl;
        }
    }
}
