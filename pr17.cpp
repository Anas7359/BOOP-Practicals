#include <iostream>
using namespace std;
class spi_compare{
	public:
		int i,j;
		int temp, spi[10];
		void getdata(){
			int i;
			for(i=0; i<10;i++){
				cout<<"Enter SPI of student "<<i+1<<" :"<<endl;
				cin>>spi[i];
			}
		}
		void putdata()
		{
			for(i=0; i<10; i++)
			{
				cout<<"SPI of Student "<<i<<" is: "<<spi[i]<<endl;
			}
		}
		void check(){
		
			for(i=0; i<10; i++){
				for(j=i+1; j<10; j++){
					if(spi[j]>spi[i])
					{
						temp=spi[i];
						spi[i]=spi[j];
						spi[j]=temp;
					}
				}
			}
		}
};

int main()
{
	spi_compare f;
	f.getdata();
	f.check();
	f.putdata();
	
	return 0;
}
