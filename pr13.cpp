#include <iostream>
using namespace std;

class EMPLOYEE{
    char Employee_number[12];
    char Employee_name[20];
    float Basic;
    char DA[10], IT[10];
    float Net_salary;

    public:
        void getdata(){
            cout<<"Enter Employee Number: ";
            gets(Employee_number);
            cout<<"Enter Employee Name: ";
            gets(Employee_name);
            cout<<"Enter Employee's Basic salary: ";
            cin>>Basic;
            cout<<"Enter DA and IT of Employee: ";
            cin>>DA>>IT;
            cout<<"Enter Net Salary of Employee: ";
            cin>>Net_salary;
        }

        void display()
        {
            cout<<"\n\t<--Employee Info-->"<<endl;
            cout<<"Name: "<<Employee_name<<endl;
            cout<<"Number: "<<Employee_number<<endl;
            cout<<"Basic: "<<Basic<<endl;
            cout<<"DA: "<<DA<<" IT: "<<IT<<endl;
            cout<<"Net Salary: "<<Net_salary<<endl;
        }
};

int main()
{
    EMPLOYEE E;
    E.getdata();
    E.display();
    return 0;
}