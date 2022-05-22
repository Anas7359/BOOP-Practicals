#include <iostream>
using namespace std;
int main()
{
    int a[10], i,j,n,temp;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<"Enter Numbers for Array\n";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout<<"Sorted Arrays:"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}