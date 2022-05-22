#include <iostream>
using namespace std;
void sort(int *a, int *b){
    int temp;
    if(*b < *a){
        temp = *a;
        *a = *b;
        *b = temp;  
    }
}
int main()
{
    int num1, num2;
    cout<<"Enter First Number: ";
    cin>>num1;
    cout<<"Enter Second Number: ";
    cin>>num2;
    sort(&num1, &num2);
    cout<<"Sorted Value: \n"<<num1<<" And "<<num2;
    return 0;
}