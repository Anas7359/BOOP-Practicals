#include <iostream>
using namespace std;

class Base{
    int a;
    public:
    void setdata(int a){
        this->a = a;
    }
    void getdata(){
        cout<<"Number is: "<<a<<endl;
    }
};

int main(){
    Base num;
    num.setdata(45);
    num.getdata();

    return 0;
}