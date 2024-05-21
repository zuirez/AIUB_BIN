#include<iostream>
using namespace std;

struct Employee
{
    string EmployeeName;
    string EmployeeID;
    float EmployeeSalary;
    int JoiningYear;

    void SetEmployeeInfo(string name, string id, float sal, int year)
    {
        EmployeeName=name;
        EmployeeID=id;
        EmployeeSalary=sal;
        JoiningYear=year;
    }

    float SetBonus()
    {
        if(EmployeeSalary>25000 && JoiningYear<2016)
            return 0.3*EmployeeSalary;
        else if(EmployeeSalary>20000 && JoiningYear<2018)
            return 0.2*EmployeeSalary;
        else
            return 0.05*EmployeeSalary;
    }

    void DisplayInfo()
    {
        cout<<"Employee Name : "<<EmployeeName<<endl;
        cout<<"Employee ID : "<<EmployeeID<<endl;
        cout<<"Employee Salary : "<<EmployeeSalary<<endl;
        cout<<"Joining year : "<<JoiningYear<<endl;
        float bonus = SetBonus();
        cout<<"Bonus : "<<bonus<<endl;
    }
};

int main()
{
    Employee e1;

    e1.SetEmployeeInfo("Rashed", "23-53193-3", 29000, 2003);
    e1.DisplayInfo();
}
