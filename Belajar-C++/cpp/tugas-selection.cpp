#include<iostream>
using namespace std;

int main()

{
	string user, pass;
	
	
	//input username & password
	cout<<"Masukkan Username"<<" = ";
	cin>>user;
	
	cout<<"Masukkan Password"<<" = ";
	cin>>pass;
	
	if(user=="Kiki")
		cout<<"Data Login Valid!";
	else
		cout<<"Username Tidak Valid!!!"<<endl;
	
	if(pass=="Kiki")
		cout<<"Data Login Valid!";

}
