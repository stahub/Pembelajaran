#include <iostream>
using namespace std;
int main()
{
	cout<<"Konversi Suhu"<<endl;
	cout<<"---------------"<<endl;
	cout<<"	"<<endl;
	
	//process
	
	float c,f,k,r;
	
	cout<<"Masukkan Nilai Suhu Celcius"<<" = ";
	cin>>c; 
	
	cout<<"	"<<endl;
	cout<<"--------------------------------------"<<endl;
	cout<<"Mengkonvert Nilai Suhu ke Suhu Lainnya"<<endl;
	cout<<"--------------------------------------"<<endl;
	cout<<"	"<<endl;
	
	f = (9.0/5.0) * c + 32;
	cout<<"Suhu Dalam Fahrenheit"<<" = "<<f<<" F"<<endl;
	
	k = c + 273.15;
	cout<<"Suhu Dalam Kelvin"<<" = "<<k<<" K"<<endl;
	
	r = (4.0/5.0) * c;
	cout<<"Suhu Dalam Reamur"<<" = "<<r<<" R"<<endl;
}
