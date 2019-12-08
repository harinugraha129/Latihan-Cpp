#include <iostream>

using namespace std;

int main() 
{
	int ukuran;
	cin>>ukuran;
	
	for(int row = 0; row < ukuran;row++){
		for(int x=0; x< ukuran ; x++){
			cout<<" ";
			}
		for (int y=0;y<ukuran - row;y++){
				
			cout<<" ";
		}
		for (int z=0;z<=row;z++){
		cout<<"* ";}
	cout<<endl;}
	for(int row = 0; row < ukuran;row++){
		for(int y=0; y< ukuran-row;y++){
			cout<<" ";}
			for (int z=0;z<=row;z++){
		cout<<"* ";}
		for(int x=row;x<ukuran-1;x++){
		cout<<"  ";}
		for (int v=0; v<=row;v++){
			cout<<"* ";
		}
		
	cout<<endl;}
	return 0;
}
