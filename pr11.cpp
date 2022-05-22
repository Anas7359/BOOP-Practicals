#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
void max(int a,int b,int c){
    if(a>b)
    {
        if(a>c)
        {
            cout<<"First Number is Maximum!"<<endl;
        }
        else
        {
            cout<<"Third Number is Maximum!"<<endl;
        }
    }
    else
    {
        cout<<"Second Number is Maximum!"<<endl;
    }
}
void max(char a[], char b[], char c[])
{
    if(strlen(a)>strlen(b))
    {
        if(strlen(a)>strlen(c))
        {
            cout<<"First String is Maximum!"<<endl;
        }
        else{
            cout<<"Third String is Maximum!"<<endl;
        }
    }
    else{
        cout<<"Second String is Maximum!"<<endl;
    }
}
int main()
{
    int num1, num2, num3;
    cout<<"Enter First Number: ";
    cin>>num1;


    
    cout<<"Enter Second Number: ";
    cin>>num2;
    cout<<"Enter Third Number: ";
    cin>>num3;
    max(num1, num2, num3);
    fflush(stdin);

    char str1[25], str2[25], str3[25];
    cout<<"Enter First String: ";
    gets(str1);
    cout<<"Enter Second String: ";
    gets(str2);
    cout<<"Enter Third String: ";
    gets(str3);

    max(str1, str2, str3);
    return 0;
}