#include <iostream>
using namespace std;
class convert{
	float cm;
	float inch, feet, meter, kilometer;
	
	public: 
		
		void getdata(){
			cout<<"Enter value in Centimeter";
			cin>>cm;
		}
		void setdata(){
			inch = cm * 0.393701;
			feet = cm/30.48;
			meter = cm*100;
			kilometer = cm*1000;
		}
		void display(){
			cout<<"Inches: "<<endl;
			cout<<"feet: "<<endl;
			cout<<"Meter: "<<meter<<endl;
			cout<<"Kilometer: "<<kilometer<<endl;
		}
	
};

int main()
{ 
	convert obj;
	obj.getdata();
	obj.setdata();
	obj.display();
	return 0;
}
