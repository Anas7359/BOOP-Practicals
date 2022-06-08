#include <iostream>
using namespace std;
class Distance
{
    public:
        float feet, inches;
        void getdata(){
            cout<<"Enter value in feet: ";
            cin>>feet;
            cout<<"Enter value in inches: ";
            cin>>inches;
        }
        void putdata(){
            cout<<"Feet is: "<<feet;
            cout<<"Inches is: "<<inches;
        }
        friend Distance Add(Distance, Distance);
        
        
};
Distance Add(Distance d1, Distance d2)
        {
            Distance d3;
            d3.feet = d2.feet + d1.feet;
            d3.inches = d2.inches + d1.inches;
            return d3;
        }


int main(){
    Distance D1, D2, D3;
    D1.getdata();
    D2.getdata();
    D3 = Add(D1, D2);
}
