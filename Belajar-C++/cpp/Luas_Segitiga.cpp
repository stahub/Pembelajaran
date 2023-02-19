#include <iostream>
using namespace std;

int main()
{
	cout<<"Menghitung Luas Segitiga"<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"		"<<endl;
	
	//Process
	
	float A,T,l,L;
	
	cout<<"Alas Segitiga"<<" = ";
	cin>>A;
	
	cout<<"Tinggi Segitiga"<<" = ";
	cin>>T;
	
	l = A*T;
	L = l/2;
	
	cout<<"Jadi, Luas Segitiga Adalah"<<" = "<<L;
}
