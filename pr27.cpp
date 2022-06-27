#include <iostream>
using namespace std;

class area{
    float length, breadth, radius;
    public:
        area(void){
            int a, b;
            cout<<endl<<"Enter first Number: ";
            cin>>a;
            cout<<"Enter second Number: ";
            cin>>b;
            cout<<"Your Muplication answer is: "<<a*b<<endl;
        }
        area(float r){
            float ans;
            ans = (3.14 * r * r);
            cout<<endl<<"Area of circle is: "<<ans<<endl;
        }
        area(float l, float b)
        {
            float ans;
            ans = l*b;
            cout<<endl<<"Area of rectangle is: "<<ans<<endl;
        }
        ~area(void){
            cout<<"Object Data Erased! Memory Optimized."<<endl;
        }
};

int main(){
    area a;
    area b(12.2);
    area c(23.3, 22.2);

    return 0;
}