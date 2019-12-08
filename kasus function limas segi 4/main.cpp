#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



double volumelimas(double sisi, double tinggi){
	double nilai=0;
	nilai =sisi*sisi*tinggi/3;
	return nilai;
}

double lplimas(double sisi, double tinggi){
	double nilai=0,sm1=0, s2=0;
	s2=sisi*0.5;
	sm1=sqrt((s2*s2)+(tinggi*tinggi));
		nilai =(sisi*sisi)+(2*sisi*sm1);
	return nilai;
}

int main(){
	
	double sisi, tinggi;
	cout<<"menghitung Volume dan Luas Permukaan Limas Segi 4"<<endl<<endl;
	cout<<"masukan Sisi Alas = "; cin>>sisi;
	cout<<"masukan Tinggi = "; cin>>tinggi;
	cout<<endl<<endl;

	cout<<"Volume Limas : "<<volumelimas(sisi,tinggi );
	cout<<endl;
	cout<<"Luas Permukaan Limas : "<<lplimas(sisi,tinggi );
}
