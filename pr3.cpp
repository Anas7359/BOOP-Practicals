#include <iostream>
using namespace std;
int main()
{
    int i,j,k=1;
    for(i=1; i<=4;i++)
    {
        for(j=5; j>=i; j--)
        {
            cout<<" ";
        }
        for(j=1; j<=i; j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<"\n";
    }


    return 0;

}