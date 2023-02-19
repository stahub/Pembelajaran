#include <iostream>
using namespace std;

int main()
{
	//inisialisasi variabel
	int a=80;
	int b=40;
	int tambah, kurang, kali;
	float bagi, mod;
	
	//proses
	tambah = a+b;
	kurang = a-b;
	kali = a*b;
	bagi = a/b;
	mod = a%b;
	
	//output
	cout<<"Hasil penjumlahan : "<<tambah<<endl;
	cout<<"Hasil pengurangan : "<<kurang<<endl;
	cout<<"Hasil perkalian : "<<kali<<endl;
	cout<<"Hasil pembagian : "<<bagi<<endl;
	cout<<"Hasil sisa bagi : "<<mod; 
}
