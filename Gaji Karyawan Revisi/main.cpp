#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	cout<<"Perhitungan Gaji Karyawan PT.ZENSOFINT"<<endl;
	cout<<"Gaji biasa = Rp. 10.000/jam"<<endl;
	cout<<"Gaji lembur = Rp. 20.000/jam"<<endl;
	cout<<"PT. Zensofint jam kerja dimulai dari jam 08.00 ampai 14.00"<<endl;
	cout<<"jam Lemburnya dari jam 14.00 sampai 20.00"<<endl;
	
	cout<<endl;
	cout<<"Masukan pukul berapa anda masuk !"<<endl;
	int am,ap,bm,bp,cm,cp,abc,abd, x, y, z, lembur, gajitotal;
	
	cout<<"Jam = ";
	cin>>am;
	cout<<"Menit = ";
	cin>>bm;
	cout<<"Detik = ";
	cin>>cm;
	abc= am*3600+bm*60+cm;
	if(abc<=28800){
		cout<<"Masukan pukul berapa anda Pulang !"<<endl;
	cout<<"Jam = ";
	cin>>ap;
	cout<<"Menit = ";
	cin>>bp;
	cout<<"Detik = ";
	cin>>cp;
	abd= ap*3600+bp*60+cp;
	if(abd<=72000){
		x=abd-28800;
		if(x>=21600){
			y=x-21600;
			z=y/3600;
			lembur=z*20000;
			gajitotal = 60000+lembur;
		}else{
			gajitotal = (x/3600)*10000;
		}
		cout<<"Gaji Harian = Rp. "<<gajitotal<<endl;
		cout<<"gaji Bulanan = Rp. "<<gajitotal*30<<endl;
	}else{
	cout<<"PT. ZENSOFINT tutup pukul 20.00. Jadi jangan mengada-ngada!!"<<endl;}
	}else{
	cout<<"Maaf anda Telat masuk"<<endl;
	cout<<"Biasakan berangkat lebih Pagi Lagi"<<endl;
	}
	
	getch();
	
	return 0;
}

