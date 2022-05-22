#include <iostream>
using namespace std;
inline int mul(int a, int b)
{
    return a*b;
}
int main()
{
    int num1, num2;
    cout<<"Enter Your First number: ";
    cin>>num1;
    cout<<"Enter Your Second number: ";
    cin>>num2;
    cout<<"The Multiplication of two number is: "<<mul(num1, num2);
    return 0;
}