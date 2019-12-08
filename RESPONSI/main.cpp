#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */





string nim, nama, ps, kls, ank, dw, kod, nmat;
char nilai,pil;
int tot,ini=0, total,totsks=0,sks,bobot;
double A=0,B=0,ip;	


typedef struct Tnode
{
	string kod;
	string nmat;
	int sks;
	string nilai;
	int bobot;
	int total;	
	Tnode *next;
	
}data;

Tnode *head;

void init()
{
	head=NULL;
}

int IsEmpty()
{
	if(head==NULL)
	return 1;
	else
	return 0;
}
					
void inputdata(string kods, string nmats, int skss, int nilais, int bobots, int totals )
{
	Tnode *Temp,*Tempb;
	
	Temp = new Tnode;
	
	Temp->kod=kods;
	Temp->nilai=nilais;
	Temp->nmat=nmats;
	Temp->sks=skss;
	Temp->bobot=bobots;
	Temp->total=totals;
	Temp->next=NULL;
	
	if(IsEmpty()==1)
	{
		head=Temp;
		head->next=NULL;
	}else
	{
		Tempb=head;
		while(Tempb->next!=NULL)
		{
			Tempb=Tempb->next;
		}
		
		Tempb->next=Temp;
	}
	ini++;
}


void KHS()
{
	system("cls");
	cout<<"--------------KHS---------------"<<endl;
	cout<<"NIM = "<<nim<<endl;
	cout<<"NAMA = "<<nama<<endl;
	cout<<"PROGRAM STUDI = "<<ps<<endl;
	cout<<"KELAS = "<<kls<<endl;
	cout<<"ANGKATAN = "<<ank<<endl;
	
	Tnode *Temp,*Tempb;
	
	Temp = new Tnode;
	Temp=head;
	
	
	
	
	cout<<"Nilai Mata Kuliah Yang Diambil"<<endl;
	cout<<"============================================================================\n";
	
	cout<<"Kode Matkul\t|Nama Matkul\t|SKS\t|Nilai\t|Bobot\t|Total\t|\n";
	
	cout<<"============================================================================\n";
	
	
	for(int i=0;i<ini;i++)
	{
		cout<<Temp->kod<<"\t"<<Temp->nmat<<"\t"<<Temp->sks<<"\t"<<Temp->nilai<<"\t"<<Temp->bobot<<"\t"<<Temp->total<<endl;
		Temp=Temp->next;
	}	
	cout<<"============================================================================\n";
	cout<<"Total SKS = "<<totsks<<endl;
	cout<<"IPK		 = "<<ip<<endl;
	cout<<"Dosen Wali\n\n"<<endl;
	cout<<dw<<endl;
}


int main() 
{
//	string nim, nama, ps, kls, ank, dw, kod, nmat;
//	char nilai,pil;
//	int total,totsks,sks,bobot;
//	double ip;
	
	
	
	
	cout<<"------------------SIA----------------------"<<endl;
	
	cout<<"NIM : ";cin>>nim;
	cout<<"NAMA : ";cin>>nama;
	cout<<"PROGRAM STUDI : ";cin>>ps;
	cout<<"KELAS :";cin>>kls;
	cout<<"ANGKATAN :";cin>>ank;
	cout<<"DOSEN WALI :";cin>>dw;
	
	cout<<endl;
	
	cout<<"Mata Kuliah Yang Diambil"<<endl;
	do
	{
		cout<<"KODE : ";cin>>kod;
		cout<<"NAMA : ";cin>>nmat;
		cout<<"JUMLAH SKS : ";cin>>sks;
		cout<<"NILAI : ";cin>>nilai;
		cout<<"Input Lagi ? "; cin>>pil;
		totsks=totsks+sks;
		
		if (nilai=='A'){
			bobot= 4;
			total=sks*bobot;
		}
		else if(nilai=='B'){
			bobot= 3;
			total=sks*bobot;
		}
		else if(nilai=='C'){
			bobot= 2;
			total=sks*bobot;
		}
		else if (nilai=='D'){
			bobot= 1;
			total=sks*bobot;
		}
		else if(nilai=='E')
		{
			bobot= 0;
			total=sks*bobot;
		}
		cout<<endl;
		
		A=A+total;
		
		
		if(totsks<=24)
		{
			
			tot=totsks;
			inputdata(kod,nmat,sks,nilai,bobot,total);
		
		}
	}while(pil=='y' && tot<=24);
	
	ip=A/totsks;
	
	KHS();
	
	
	
	
	
	
	return 0;
}
