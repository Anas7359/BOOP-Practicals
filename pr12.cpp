#include <iostream>
using namespace std;

struct college_info{
    char college_name[25];
    char college_code[10];
    char dept[20];
    int intake;
};
int main()
{
    college_info st1;
    cout<<"Enter Your college name: ";
    gets(st1.college_name);
    cout<<"Enter Your college code: ";
    gets(st1.college_code);
    cout<<"Enter Your Deparment name: ";
    gets(st1.dept);
    cout<<"Enter Intake: ";
    cin>>st1.intake;
    cout<<endl<<endl;

    cout<<"College Name: "<<st1.college_name<<endl;
    cout<<"College Code: "<<st1.college_code<<endl;
    cout<<"Department Name: "<<st1.dept<<endl;
    cout<<"Intake: "<<st1.intake<<endl;
    
    return 0;
}