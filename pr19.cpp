#include <iostream>
using namespace std;

class st{
    char name[20];
    static int var;
   public:
    void setdata(){
        cout<<"Enter Your Name: ";
        gets(name);
        var++;
    }
    static void value(){
        cout<<"You have created "<<var<<" Objects."<<endl;
    }
    
};

int st:: var;
int main(){
    st obj1, obj2, obj3;
    obj1.setdata();
    obj2.setdata();
    obj3.setdata();
    st::value();
    return 0;
}