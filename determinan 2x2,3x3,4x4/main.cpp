#include <iostream>
#include <conio.h>
using namespace std;

int main() 
{
	int nomor;
	cout<<"Berikut data Ukuran MATRIX nya : "<<endl;
	cout<<"1. Ukuran 2x2 "<<endl;
	cout<<"2. Ukuran 3x3"<<endl;
	cout<<"3. Ukuran 4x4"<<endl;
	cout<<"Anda memilih ukuran MATRIX nya nomor : ";
	cin>>nomor;
	cout<<endl;
	switch (nomor){
		case 1 :cout<<"Menghitung_Determinan_2x2"<<endl;
		double	A12, A21, A22, A11;
	float det;
	cout<<"A11 = " ;
	cin>>A11;
	cout<<"A12 = " ;
	cin>>A12;
	cout<<"A21 = " ;
	cin>>A21;
	cout<<"A22 = " ;
	cin>>A22;
	
	det = (A11*A22)-(A12*A21);
	cout<<"Determinan = "<<det<<endl;
	cout<<"Bila_Punya_Saran_Untuk_Membuat_Program_Apa,_Hubungi"<<endl;
	cout<<"HARRY_NUGRACHA_085215467112_Email_harin260@gmail.com"<<endl; break;
	getch();
		case 2 :cout<<"Menghitung_Determinan_3X3"<<endl;
		double A13,   A23, A31, A32, A33;
	
	
	
	cout<<"A11 = " ;
	cin>>A11;
	cout<<"A12 = " ;
	cin>>A12;
	cout<<"A13 = " ;
	cin>>A13;
	cout<<"A21 = " ;
	cin>>A21;
	cout<<"A22 = " ;
	cin>>A22;
	cout<<"A23 = " ;
	cin>>A23;
	cout<<"A31 = " ;
	cin>>A31;
	cout<<"A32 = " ;
	cin>>A32;
	cout<<"A33 = " ;
	cin>>A33;
	
	det = (A11 * A22 * A33) + (A12 * A23 * A31) + (A13 * A21 * A32) - (A12 * A21 * A33) - (A13 * A22 * A31) - (A11 * A23 * A32);
	cout<<"Determinan = "<<det<<endl;
	cout<<"Bila_Punya_Saran_Untuk_Membuat_Program_Apa,_Hubungi"<<endl;
	cout<<"HARRY_NUGRACHA_085215467112_Email_harin260@gmail.com"<<endl; break;
	getch();
		case 3 :cout<<"Menghitung_Determinan_4X4"<<endl;
		double  A14, A24, A34, A41, A42, A43, A44 ;
	
	cout<<"A11 = " ;
	cin>>A11;
	cout<<"A12 = " ;
	cin>>A12;
	cout<<"A13 = " ;
	cin>>A13;
	cout<<"A14 = " ;
	cin>>A14;
	cout<<"A21 = " ;
	cin>>A21;
	cout<<"A22 = " ;
	cin>>A22;
	cout<<"A23 = " ;
	cin>>A23;
	cout<<"A24 = " ;
	cin>>A24;
	cout<<"A31 = " ;
	cin>>A31;
	cout<<"A32 = " ;
	cin>>A32;
	cout<<"A33 = " ;
	cin>>A33;
	cout<<"A34 = " ;
	cin>>A34;
	cout<<"A41 = " ;
	cin>>A41;
	cout<<"A42 = " ;
	cin>>A42;
	cout<<"A43 = " ;
	cin>>A43;
	cout<<"A44 = " ;
	cin>>A44;
	
	det = (A44*((A11 * A22 * A33) + (A12 * A23 * A31) + (A13 * A21 * A32) - (A12 * A21 * A33) - (A13 * A22 * A31) - (A11 * A23 * A32))) + (A43*-((A11 * A22 * A34) + (A12 * A24 * A31) + (A14 * A21 * A32) - (A12 * A21 * A34) - (A14 * A22 * A31) - (A11 * A24 * A32))) + (A42*((A11 * A23 * A34) + (A13 * A24 * A31) + (A14 * A21 * A33) - (A13 * A21 * A34) - (A14 * A23 * A31) - (A11 * A24 * A33))) + (A41*-((A12 * A23 * A34) + (A13 * A24 * A32) + (A14 * A22 * A33) - (A13 * A22 * A34) - (A14 * A23 * A32) - (A12 * A24 * A33)));
	cout<<"Determinan = "<<det<<endl;
	cout<<"Bila_Punya_Saran_Untuk_Membuat_Program_Apa,_Hubungi"<<endl;
	cout<<"HARRY_NUGRACHA_085215467112_Email_harin260@gmail.com"<<endl;break;
	getch(); 
		
		default : cout<<"Pilih dengan ketik salah satu angkanya aja dari 1 sampai 3."<<endl;
		 		cout<<"Misal 1 ya ketik saja 1. Jangan ketik yang lain."<<endl;
		 		getch();
	}
	getch();
	
}

