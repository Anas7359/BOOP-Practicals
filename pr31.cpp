#include <iostream>
using namespace std;

class Base1
{
protected:
    int num1;
    int num2;
};

class Base2 : public Base1
{
protected:
    int num3;
    int num4;
};

class Derived : public Base2
{
protected:
    int avg;

public:
    Derived(int a1, int a2, int b1, int b2)
    {
        num1 = a1;
        num2 = a2;
        num3 = b1;
        num4 = b2;
        avg = (num1 + num2 + num3 + num4) / 4;
    }
    void display()
    {
        cout << "Average of Number is: " << avg << endl;
    }
};

int main()
{
    Derived d(23, 34, 22, 89);
    d.display();

    return 0;
}