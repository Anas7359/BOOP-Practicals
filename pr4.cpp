#include <iostream>
using namespace std;
int main()
{
    int num, prime=0,i;
    cout<<"Enter Number To Check Prime or Not? -> ";
    cin>>num;

    for(i=2; i<=(num/2); i++)
    {
        if(num%i==0)
        {
            prime=1;
            break;
        }
        
    }
    if(prime==0){
        cout<<"Number is Prime!";
    }
    else
    {
        cout<<"Number is not Prime!";
    }
    return 0;
}