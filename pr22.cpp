#include <iostream>
using namespace std;
class time{
    int hour;
    int minute;
    public:
        void getdata(int a, int b){
            hour = a;
            minute = b;
        }
        void putdata(time t1, time t2){
            cout<<"FIRST TIME ZONE: ";
            cout<<t1.hour<<" hour, "<<t1.minute<<" minute"<<endl;
            cout<<"SECOND TIME ZONE: ";
            cout<<t2.hour<<" hour, "<<t2.minute<<" minute"<<endl;
        }
};

int main()
{
    time t1, t2, t3;
    t1.getdata(4, 35);
    t2.getdata(3,42);
    t3.putdata(t1,t2);

    return 0;
}