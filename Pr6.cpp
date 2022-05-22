#include <iostream>
using namespace std;
int var = 34;
int main()
{
    cout<<"The Global variable value is: "<<::var;
    return 0;
}