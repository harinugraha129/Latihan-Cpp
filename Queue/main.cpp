#include <iostream>
#include <conio.h>
using namespace std;
typedef struct Tnode
{
	string data;
	int no;
	Tnode *next;
}data;

typedef struct Pnode
{
	string nama;
	string pesan;
	int jumlah;
	Pnode *Pnext;
}Pdata;


int noan=1;
Pnode *Phead;
Tnode *head;
Tnode *bantu;



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

/*
void insertdepan(int n)
{
	Tnode *baru;
	baru = new Tnode;
	baru->data = n;
	baru->next = NULL;
	if(IsEmpty()==1)
	{
		head=baru;
		head->next = NULL;
	}else
	{
		baru->next=head;
		head=baru;	
	}
	cout<<"Data Terisi";
}
*/


void insertbelakang(string n)
{
	int x=0;
	if(head==NULL && bantu!=NULL)
	{
		head=bantu;
		x=5;
	}
	
	
	
	Tnode *baru,*Tbantu;
	baru = new Tnode;
	baru->data = n;
	baru->next = NULL;
	if(IsEmpty()==1)
	{
		head=baru;
		head->no = 1;
		head->next = NULL;
	}else
	{
		Tbantu = head;
		while(Tbantu->next!=NULL)
		{
			Tbantu=Tbantu->next;
		}
		baru->no=Tbantu->no+1;
		Tbantu->next=baru;
		
	}
	cout<<"Data Terisi";
	
	if(x==5)
	{
		head=Tbantu->next;
	}
}

int PsEmpty()
{
	if(Phead==NULL)
	return 1;
	else
	return 0;
}


void insertpesanan(string pes, int jum)
{
	
	Pnode *Pbaru,*Pbantu;
	Pbaru = new Pnode;
	Pbaru->pesan = pes;
	Pbaru->jumlah = jum;

	Pbaru->Pnext = NULL;
	if(PsEmpty()==1)
	{
		Phead=Pbaru;
		Phead->Pnext = NULL;
		
	}else
	{
		Pbantu = Phead;
		while(Pbantu->Pnext!=NULL)
		{
			Pbantu=Pbantu->Pnext;
		}
		Pbantu->Pnext=Pbaru;
		
	}
	cout<<"Data Terisi";

}



void panggil()
{
	//Tnode *bantu;
	//bantu = head;
	if(IsEmpty()==0)
	{
			cout<<"Antrian terdepan dipersilahkan Mengisi Data"<<endl;
	}else
			cout<<endl<<"Masih Kosong"<<endl;
}


void tampil()
{
	int no=noan;
	Tnode *cantu;
	cantu = head;
	if(IsEmpty()==0)
	{
		while(cantu!=NULL)
		{
			cout<<no<<" "<<cantu->data<<endl;
			cantu=cantu->next;
			no++;
		}
	}else
		cout<<endl<<"Masih Kosong"<<endl;
}



void tampilpesanan()
{
	int no=1;
	Tnode *antu;
	Pnode *Pbantu;
	
	Pbantu = Phead;
	antu=bantu;
	if(PsEmpty()==0)
	{
		while(Pbantu!=NULL)
		{
			cout<<no<<" "<<antu->data<<endl;
			cout<<Pbantu->pesan<<" "<<Pbantu->jumlah<<" Butir"<<endl;
			Pbantu=Pbantu->Pnext;
			antu=antu->next;
			no++; cout<<endl;
		}
	}else
		cout<<endl<<"Masih Kosong"<<endl;
}



void hapusdepan()
{
	Tnode *hapus;
	string d;
	
	
	if(bantu==NULL)
	bantu = head;
	
	
	if(IsEmpty()==0)
	{
		if(head!=NULL)
		{
			noan=noan+1;
			hapus=head;
			d=hapus->data;
			head=hapus->next;			
		}
	
	}else
	cout<<"\nMasih Kosong\n";
}
int main()
{
	int j,pil;
	char p;
	string n,z;
	do{
		cout<<"Masukan Pilihan "<<endl;
		cout<<"1.Masukan\n2.Tampilkan Antrian\n3.Panggil Antrian\n4.Tampilkan Pesanan \n5.Clear\n6.Exit"<<endl;
		cout<<"masukkan pilihan = "; cin>>pil;		
		cout<<"\n\n\n\n";
		switch(pil)
		{
			case 1 : cout<<"Masukan Data : "; cin>>n;
			IsEmpty();
			insertbelakang(n);
			break;
			
			case 2 :
			IsEmpty();
			tampil();
			break;
			
			case 3 : 
			IsEmpty();
			
			panggil();
			if(IsEmpty()==0)
				{
						cout<<"Masukan Nama Pesanan : "; cin>>z;
						cout<<"Masukan Jumlah Pesanan : "; cin>>j;
						insertpesanan(z,j);
						hapusdepan();
				}
			break;
			
			case 4 :
			PsEmpty();
			tampilpesanan();
			break;
			
			case 5 :
			head=NULL;
			Phead=NULL;
			cout<<"\n\nData Terhapus\n\n";
			break;
	
			case 6 :
			cout<<"Good Bye-Bye"<<endl;
			break;	
			default :
				cout<<"Jangan Becanda dong Beb"<<endl;
		}
		cout<<endl;
		cout<<"Lanjut";
		getch();
	system("cls");	
	}while(pil!=6);
	for(int x=1;x<10;x++)
	
	return 0;
}	

