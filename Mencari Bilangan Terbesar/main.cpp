#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a, b, c, x;
	cout<<"Mencari 3 Nilai Terbesar\n"<<endl;
	cout<<"Masukan Nilai nya"<<endl;
	cout<<"a= "; cin>>a;
	cout<<"b= "; cin>>b;
	cout<<"c= "; cin>>c;
	
	if(a>b && a>c){x=a;}
	else if(b>c){x=b;}
	else{x=c;}
	
	cout<<"Nilai Terbesar dari 3 angka tersebut adalah "<<x<<endl;
	
	
	return 0;
}
