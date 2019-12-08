#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int a[]={1,2,3,4,5};
	int *pa;
	
	for(int i=0;i<5;i++)
	{
		pa=&a[i];
		cout<<a[i]<<" "<<pa<<" "<<*pa<<endl;
	}	
	
	
	return 0;
}
