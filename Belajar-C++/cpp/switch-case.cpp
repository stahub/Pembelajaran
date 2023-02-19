#include <iostream>
using namespace std;

int main()
{
	int angka, jml;
	string y, n, tmbhn;
	
	cout<<"Menu Makanan : "<<endl;
	cout<<"1. Pizza"<<endl;
	cout<<"2. Burger"<<endl;
	cout<<"3. Kentang Goreng"<<endl;
	
	cout<<""<<endl;
	cout<<"Pilih Makanan Berdasarkan Angka Urutannya : ";
	cin>>angka;
	
	cout<<"Jumlahnya : ";
	cin>>jml;
	
	cout<<""<<endl;
	cout<<"Ada lagi makanan yang ingin di pesan? (ya/tidak) : ";
	cin>>tmbhn;
	system("CLS");
	
		while(tmbhn == "ya"){
		cout<<""<<endl;
		cout<<"Menu Makanan : "<<endl;
		cout<<"1. Pizza"<<endl;
		cout<<"2. Burger"<<endl;
		cout<<"3. Kentang Goreng"<<endl;
	
		cout<<""<<endl;
		cout<<"============================================="<<endl;
		cout<<""<<endl;
		cout<<"Pilih Makanan Berdasarkan Angka Urutannya : ";
		cin>>angka;
	
		cout<<"Jumlahnya : ";
		cin>>jml;
	
		cout<<""<<endl;
		cout<<"Ada lagi makanan yang ingin di pesan? (ya/tidak) : ";
		cin>>tmbhn;
		cout<<""<<endl;
		cout<<"============================================="<<endl;
		system("CLS");
		
	}
	
	
	system("CLS");
	
	cout<<"y ok";
}
