#include <iostream>
using namespace std;

class EMPLOYEE{
    private:
        int EMPCODE;
        char EMPNAME[20];
    public:
        void getdata(){
            cout<<"Enter Employee Name: ";
            cin>>EMPNAME;
            cout<<"Enter Employee Code: ";
            cin>>EMPCODE;
            cout<<endl;
        }    
        void putdata(){
            cout<<"Employee Name: "<<EMPNAME<<endl;
            cout<<"Employee Code: "<<EMPCODE<<endl;
            cout<<endl;
        }
};

int main()
{
    EMPLOYEE EMP[6];
    int i;
    for(i=0; i<6; i++)
    {
        EMP[i].getdata();
    }
    for(i=0; i<6; i++)
    {
        EMP[i].putdata();
    }

    return 0;
}