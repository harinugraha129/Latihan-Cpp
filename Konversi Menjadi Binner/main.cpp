#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	int a,b,c,i;
	cout<<"Mengkonversi Menjadi Biner\n\n";
	cout<<"Masukan nilai yang mau dikonversi = "; cin>>a;
	b=a;
	int biner[30];
	i=0;
	while(b!=0){
		
		biner[i]=b % 2;
		b=b/2;
		
		i=i+1;
		
	}
	cout<<endl;
for(int j=i-1;j>=0;j--){
	cout<<biner[j];
}
	return 0;
}
