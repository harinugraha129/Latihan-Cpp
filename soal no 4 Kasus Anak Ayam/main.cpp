#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int ayam;
	cout<<"masukan jumlah Ayam : "; cin>>ayam;
	for(int i=ayam;i>=1;i--)
	{	
		if(i>1){
		cout<<i<<" anak ayam , mati satu tinggal "<<i-1<<" anak ayam"<<endl;}
		else{
		cout<<"1 anak ayam, mati satu mati semua "<<endl;}
	}

}



