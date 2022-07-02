#include <iostream>
using namespace std;

class car{
    protected:
        int tires;
};

class Bus{
    protected:
        int mfgYear;
        char color[25];
};

class vehicle: public car, public Bus{
    protected:
        float price;
    public:
        void setdata(){
            cout<<"Enter Color of Vehicle: ";
            gets(color);
            cout<<"Enter Number of Tires: ";
            cin>>tires;
            cout<<"Enter Manufacturing year: ";
            cin>>mfgYear;
            cout<<"Enter Price of Vehicle: ";
            cin>>price;
        }

        void display(){
            cout<<endl<<"<--Vehicle Info-->"<<endl;
            cout<<"Color: "<<color<<endl;
            cout<<"Manufacturing Year: "<<mfgYear<<endl;
            cout<<"Number of Tires: "<<tires<<endl;
            cout<<"Price: "<<price<<endl;
        }
};

int main()
{
    vehicle v1;
    v1.setdata();
    v1.display();
    return 0;
}
