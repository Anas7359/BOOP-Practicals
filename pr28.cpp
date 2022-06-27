#include <iostream>
using namespace std;
 
class base{
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