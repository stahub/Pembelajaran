#include <iostream>
using namespace std;
int main()
{
	#define tes 123
	#define tess "tess"
	
	cout<<tes<<endl;
	cout<<tess<<endl;


	#define kali(a, b) (a * b)
	cout<<"Berapa kali berapa : "<<kali(1, 2)<<endl;
	
	string a,b;
	cin>>a;
	cin>>b;
	
	#define tesss() (a + b)
	cout<<tesss()<<endl;
	
}
