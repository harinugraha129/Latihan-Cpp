#include <iostream>

using namespace std;

int main() 
{
	int tinggi;
	cin>>tinggi;
	int l=1;
	int n=tinggi/2;
	cout<<"\n";
	for(int i = 1; i <= n;i++){
		for (int k=n;k>i;k--){	
			cout<<"x";
		}
		for (int j=1;j<=l;j++){
		cout<<"*";}
		l+=2;
		cout<<"\n";}
		l-=4;
	for(int i =(n-1); i >= 1; i--){
		for(int k=i; k<=(n-1);k++){
			cout<<" ";}
		for (int j=l;j>=1;j--){
		cout<<"*";}
		l-=2;
		cout<<"\n";
		}
	return 0;
}

