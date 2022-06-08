#include <iostream>
using namespace std;
class test{
    private:
        static int var;
    public:
        void putdata(){
            var++;
            var++;
            var++;
            cout<<"The value of variable: "<<var<<endl;
        }


};
int test::var;
int main(){
    test t;
    t.putdata();

    return 0;
}