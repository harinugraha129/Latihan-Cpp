#include <iostream>

using namespace std;

int main() 
{
	int x;
	
	cout<<"masukan Nilainya = ";
	cin>>x;
	
if (x>=80 && x<=100){
	
		cout<<"A";
	}
	else if (x>=65 && x<80){
	
		cout<<"B";
	}
	else if(x>=45 && x<65){
	
		cout<<"C";
	}else if (x>=25 && x<45){
	
		cout<<"D";
	}else if(x<25 && x>=0){
		cout<<"E";
	}else{
		cout<<"Eror";
	}
	return 0;
}
