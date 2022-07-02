#include <iostream>
using namespace std;

class man{
    protected:
        char name[20];
        int age;
    public:
        void setdata(){
            cout<<"Enter Your name: ";
            gets(name);
            cout<<"Enter Your Age: ";
            cin>>age;
        }    

};

class employee: public man{
    protected:
        int id; 
    public:
        void setdata(){
            cout<<"Enter Your Id: ";
            cin>>id;
        }       
};

class manager : public employee{
    protected:
        float salary;
    public: 
        void setdata(){
            man::setdata();
            employee::setdata();
            cout<<"Enter Your salary: ";
            cin>>salary;
        }    
        void display()
        {
            cout<<"<--Manager Info-->"<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"ID: "<<id<<endl;
            cout<<"Salary: "<<salary<<endl;
        }
};

int main()
{
    manager m;
    m.setdata();
    m.display();
    return 0;
}