#include <iostream>
using namespace std;

float area(float r, float pi =3.14)
{
    return pi*r*r;
}
int main()
{
    float radius = 34.2;
    float ans;
    ans = area(radius);
    cout<<"Area of Circle is: "<<ans<<endl;

    return 0;
}
