#include <iostream>
using namespace std;

int main()
{
	cout<<"HelloWorld"<<endl;
	cout<<"Hai X Tel 09"<<endl;
	cout<<"Indrasta Rabbani Harahap"<<endl;

    cout<<"------------------------"<<endl;
//	Aritmatika : x : + -
	
    cout<<"Aritmatika"<<endl;
    int a = 5;
    int b = 7;
    int c;

    cout<<"Penjumlahan"<<endl;
    c = a + b;
	cout<<a<<" + "<<b<<" = "<<c<<endl<<endl;

    cout<<"Perkalian"<<endl;
    c = a * b;
	cout<<a<<" x "<<b<<" = "<<c<<endl<<endl;

    cout<<"Pembagian"<<endl;
    float e = 5;float f = 7;
    float d = e / f;
	cout<<e<<" : "<<f<<" = "<<d<<endl<<endl;	
	
	cout<<"Pengurangan"<<endl;
    c = a - b;
	cout<<a<<" - "<<b<<" = "<<c<<endl<<endl;
	
	
	cout<<"------ Mengenal Fungsi cin--------"<<endl;
	float p,q,r;
	cout<<"Masukan Nilai P : ";
	cin>>p;
    cout<<"Masukan Nilai Q : ";
	cin>>q;	
	r = p * q;
	cout<<" P x Q = "<<r<<endl;
	
    cout<<"------ Kalkulator Suhu --------"<<endl;
	float x,y,z;
	cout<<"Masukan Nilai Suhu dalam Celcius : ";
	cin>>x;
	y = (9/5)*x+32;
    cout<<"Suhu dalam Farenheit Adalah : "<<y<<" F";
		
	
	
	
	
}

