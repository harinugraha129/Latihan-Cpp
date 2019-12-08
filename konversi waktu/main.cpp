#include <iostream>

using namespace std;

int main() {
	int detik,a,b,c,d,xa,ya,xb,yb,xc,yc,xd,yd;
	cout<<"menghitung konversi dari detik"<<endl;
	cout<<"masukan berapa detiknya = ";
	cin>>detik;
	a=86400;
	b=3600;
	c=60;
	d=1;
	
	xa=detik / a;
	ya=detik % a;
	xb=ya / b;
	yb=ya % b;
	xc=yb / c;
	yc=yb % c;
	xd=yc / d;
	yd=yc % d;
	
	
	cout<<endl;
	cout<<"jumlah Hari = "<<xa<<endl;
	cout<<"jumlah Jam = "<<xb<<endl;
	cout<<"jumlah Menit = "<<xc<<endl;
	cout<<"jumlah Detik = "<<xd<<endl;
	return 0;
}
