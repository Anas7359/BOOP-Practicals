#include <iostream>
using namespace std;

class COMPLEX{
        int real;
        int imaginary;
        public:
        void getdata(int a, int b){
            real = a;
            imaginary=b;
        }
        void putdata(){
            cout<<real<<" + i"<<imaginary<<endl;
        }
        friend COMPLEX add(COMPLEX, COMPLEX);
};

COMPLEX add(COMPLEX c1, COMPLEX c2){
    COMPLEX c3;
    c3.real = c2.real + c1.real;
    c3.imaginary = c2.imaginary + c1.imaginary;
    return c3;
}

int main(){
    COMPLEX c1, c2, c3;
    c1.getdata(23,4);
    c2.getdata(22,6);
    cout<<"First Object Complex No. : ";
    c1.putdata();
    cout<<"Second Object Complex No. : ";
    c2.putdata();
    cout<<"Addition Of Complex No. : ";
    c3 = add(c1,c2);
    c3.putdata();

    return 0;
}
