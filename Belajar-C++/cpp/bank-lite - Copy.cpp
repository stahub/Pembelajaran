#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int nr,isi,ch;
struct node
{
    int norek;
	string nama;
	string alamat;
	int saldo;
	struct node *next;
}*front=NULL,*rear,*temp;
void ins()
{
	temp=new node;
	string asal;
	string n;
	cout<<" Input no.rekening\t: ";
    cin>>nr;
    cin.ignore(1,'\n');
    cout<<" Input nama\t\t: ";
    getline(cin,n);
    cout<<" Input alamat\t\t: ";
    getline(cin,asal);
    cout<<" Input saldo awal\t: ";
    cin>>isi;
	temp->norek=nr;
	temp->nama=n;
	temp->saldo=isi;
	temp->next=NULL;

	if(front==NULL)
		front=rear=temp;
	else
	{
		rear->next=temp;
		rear=temp;
	}
}
void del()
{
	if(front==NULL)
		{cout<<" Belum ada nasabah!\n";
		getch();}
	else
	{
		temp=front;
		front=front->next;
		cout<<" No.rekening "<<temp->norek<<" dihapus beserta datanya\n";
		delete(temp);
		getch();
	}
}
void dis()
{
	if(front==NULL)
		{cout<<" Belum ada nasabah!\n";
		getch();}
	else
	{
		temp=front;
		while(temp!=NULL)
		{
			cout<<" No.rek\t: "<<temp->norek<<endl;
			cout<<" Nama\t: "<<temp->nama<<endl;
			cout<<" Saldo\t: "<<temp->saldo<<endl;
			cout<<" ------------------------------"<<endl;
			temp=temp->next;
		}
		getch();
	}
}
void cari()
{
    node *temp;
    temp=front;
    int caridata;
    int ketemu=0;
    if(front != NULL)
    {
        cout<<"\n Input no.rekening yang dicari\t: ";
        cin>>caridata;
        while(temp!=NULL)
        {
            temp->norek;
            if(caridata==temp->norek)
            {
                cout<<"\n\n>>>  Data Yang Anda Cari Ditemukan  <<<"<<endl;
                cout<<" Nama\t: "<<temp->nama<<endl;
                cout<<" Saldo\t: "<<temp->saldo<<endl;
                cout<<" ------------------------------"<<endl;
                cout<<"\n\n";
              ketemu=1;
            }
            temp=temp->next;
        }
        if(ketemu==0)
        {
            cout<<" Data tidak ditemukan";
        }
    }
    else cout<<" Belum ada nasabah!";
    getch();
}
void transaksi()
{
    node *temp;
    temp=front;
    int ketemu=0;
    if(front != NULL)
    {
        cout<<"\n Input no.rekening\t: ";
        cin>>nr;
        cout<<endl;
            while(temp!=NULL)
                {
                    temp->norek;
            if(nr==temp->norek)
                {
                    cobalagi:
                    cout<<" 1.Isi Saldo";
                    cout<<"\n 2.Tarik Tunai";
                    cout<<"\n Masukkan Pilihan : ";
                    cin>>ch;
                    if(ch==1)
                    {
                    cout<<" Saldo awal\t\t: "<<temp->saldo<<endl;
                    cout<<" Input Nominal Setoran\t: ";
                    cin>>isi;
                    temp->saldo=temp->saldo+isi;
                    cout<<" Total saldo\t\t: "<<temp->saldo<<endl;
                    cout<<" ------------------------------"<<endl;
                    cout<<"\n";
                    ketemu=1;
                    }else if(ch==2)
                    {
                        cout<<" Saldo awal\t\t: "<<temp->saldo;
                        lagi:
                        cout<<"\n Input jumlah penarikan\t: ";
                        cin>>isi;
                        if(temp->saldo<isi)
                            {
                                cout<<" Maaf Saldo Anda Kurang";
                                goto lagi;
                            }else
                            {
                                temp->saldo=temp->saldo-isi;
                                cout<<" Sisa saldo\t\t: "<<temp->saldo<<endl;
                                cout<<" ------------------------------"<<endl;
                                cout<<"\n";
                            }
                        ketemu=1;
                    }else {cout<<"Pilihan Salah!\n"; goto cobalagi;}
                 }
                 temp=temp->next;
                }
                if(ketemu==0)
                    {
                        cout<<" Data tidak ditemukan";
                }
        }
        else cout<<" Belum ada nasabah!";
        getch();
}
void cek()
{
    node *temp;
    temp=front;
    int ketemu=0;
    if(front != NULL)
    {
        cout<<"\n Input no rekening\t: ";
        cin>>nr;
        while(temp!=NULL)
        {
            temp->norek;
            if(nr==temp->norek)
            {
                cout<<" Sisa saldo saat ini\t: "<<temp->saldo;
                ketemu=1;
            }
            temp=temp->next;
        }
        if(ketemu==0)
        {
            cout<<" Data tidak ditemukan";
        }
    }
    else cout<<" Belum ada nasabah!";
    getch();
}
int main()
{
	int ch,nr,isi;
	while(1)
	{
	    system("cls");
	    cout<<"\n\n=================================================";
	    cout<<"\n               Program C++ BANK PTI             ";
		cout<<"\n_________________________________________________";
		cout<<"\n                       Menu                    ";
        cout<<"\n=================================================";
		cout<<"\n 1.Input Data Nasabah ";
		cout<<"\n 2.Hapus Data Nasabah";
		cout<<"\n 3.Transaksi";
		cout<<"\n 4.Cek Saldo";
		cout<<"\n 5.Tampilkan Daftar Nasabah";
		cout<<"\n 6.Cari Data Nasabah";
		cout<<"\n 7.Keluar";
		cout<<"\n\n Masukkan Pilihan (1-4): ";
		cin>>ch;
		cout<<"\n=================================================";
		cout<<"\n";
		switch(ch)
		{
			case 1:
			    ins();
                break;
			case 2:
			    del();
			    break;
            case 3:
                transaksi();
                break;
            case 4:
                cek();
                break;
			case 5:
			    dis();
                break;
            case 6:
                cari();
                break;
			case 7:
			    exit(0);
                break;
			default:
			    cout<<"Input salah, silahkan input ulang!(press any key)";
			    getch();
		}
	}
	return 0;
}
