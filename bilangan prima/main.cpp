#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int nilai;
	cin>>nilai;
	for(int i=1; i<=nilai; i++){
		int mod=0;
		for(int j=1; j<=i;j++){
			if(i%j==0){
				mod++;
			}
		}
		if(mod==2){
			cout<<i<<"  ";
		}
	}
	
	return 0;
}
