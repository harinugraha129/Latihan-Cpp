#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
	int a, z;
	
	z=0;
	cout<<"Berapa lama siput kan keluar dari sumur bila setiap harinya"<<endl;
	cout<<"dia naik 3 meter dan turun 2 meter.?"<<endl;
	cout<<"masukan kedalaman sumur dalam Meter !! ";
	cin>>a;
	
	
	while (a>0)
	{
		a=a-3;
		if (a>0) 
		{
		a=a+2;
		}
		
		z++;
	}
	cout<<"jawabannya "<<z<<" hari"<<endl;
	return 0;
}
