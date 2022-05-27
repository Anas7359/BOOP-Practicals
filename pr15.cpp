#include <iostream>
using namespace std;
 
 class item{
     int number;
     float cost;
     public:
        void getdata();
        void putdata();
 };

 void item::getdata(){
     cout<<"Enter the Number of item: ";
     cin>>number;
     cout<<"Enter cost of item: ";
     cin>>cost;
 }

 void item::putdata()
 {
     cout<<"Item Number: "<<number<<endl;
     cout<<"Item Price: "<<cost<<endl;
 }
 
 int main(){
     item i1;
     i1.getdata();
     i1.putdata();

     return 0;
 }