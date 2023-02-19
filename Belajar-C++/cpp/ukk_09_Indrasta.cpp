#include <iostream>
using namespace std;
int main()
{
	float UB = 17000;
	float ES = 2700;
	float R = 1750;
	float K = UB - (ES + R);
	
	cout<<"Uang Yang Dimiliki Budi = "<<UB<<endl;
	cout<<"Harga Eskrim = "<<ES<<endl;
	cout<<"Harga Roti = "<<R<<endl;
	cout<<"Jadi, Kembalian Yang Diterima Budi = "<<K<<endl;
	
	return 0;
}
