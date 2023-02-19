#include <iostream>
using namespace std;
int main()
{
	
	//Tugas Pemdas
	/*
		NAMA : Indrasta Rabbani .H / 15
		Kelas : X Tel 09
	*/
	
	
	//Data
	float nilai;
	
	//Nilai
	cout<<"Masukkan nilai anda, untuk mengetahui golongan score anda = ";
	cin>>nilai;
	
	//Perapihan
	cout<<" "<<endl;
	cout<<"========================="<<endl;
	cout<<" "<<endl;
	
	//Pengeksekusian Data
	
	if (nilai > 100)
		cout<<"Harap Masukkan Nilai Anda Yang Benar!"<<endl;
		
	else if (nilai >= 90)
		cout<<"Nilai Anda Tergolong A"<<endl;
		
	else if (nilai >= 70 and nilai < 90)
		cout<<"Nilai Anda Tergolong B"<<endl;
		
	else if (nilai >= 50 and nilai < 70)
		cout<<"Nilai Anda Tergolong C"<<endl;
		
	else if (nilai < 50)
		cout<<"Nilai Anda Tergolong D"<<endl;
	
	
		
}
