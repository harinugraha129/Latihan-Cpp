#include <iostream>
using namespace std;

int main() 
{
	int bulan;
	
	cout<<"masukan nama bulan = ";
	cin>>bulan;
	
	switch (bulan) {
		case 1 :cout<<"januari"<<endl; break;
		case 2 :cout<<"februari"<<endl; break;
		case 3 :cout<<"maret"<<endl; break;
		case 4 :cout<<"april"<<endl; break;
		case 5 :cout<<"mei"<<endl; break;
		case 6 :cout<<"juni"<<endl; break;
		case 7 :cout<<"juli"<<endl; break;
		case 8 :cout<<"agustus"<<endl; break;
		case 9 :cout<<"september"<<endl; break;
		case 10 :cout<<"oktober"<<endl; break;
		case 11 :cout<<"november"<<endl; break;
		case 12 :cout<<"desember"<<endl; break;
		default : cout<<"kamu bodo banget sih beb, bulan itu cuma 12 tolol"<<endl; break;
	}
	
	return 0;
}
