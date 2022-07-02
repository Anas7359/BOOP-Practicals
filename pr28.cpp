#include <iostream>
using namespace std;
 
class student{
    protected:
        char name[20];
        int id;
    public:
        void setdata(){
            cout<<"Enter Your Name: ";
            gets(name);
            cout<<"Enter Id Number: ";
            cin>>id;
        }
};

class Employee : public student{
    protected:
        int age;
    public:
        void setinfo(){
            setdata();
            cout<<"Enter Your Age: ";
            cin>>age;
        }
        void display(){
            cout<<endl<<"<--Employee Details-->"<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"ID: "<<id<<endl;
            cout<<"Age: "<<age<<endl;
        }

};

int main(){
    Employee emp1;
    emp1.setinfo();
    emp1.display();
}