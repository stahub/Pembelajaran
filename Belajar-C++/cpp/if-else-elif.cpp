#include <iostream>
using namespace std;

int main()
{
	//contoh if else simple
	int x;
	
	cin>>(x);
	if (x == 100)
		cout<<"ok"<<endl;
	else
		cout<<"no"<<endl;
	
	system("CLS");
		
	
	//contoh if else & elseif sederhana
	string user,pw;
	
	
	cout<<"Username Anda = "; cin>>(user);
	cout<<"Password Anda = "; cin>>(pw);
			
		//disini gw ketik setengah setengah ("login " dan "berhasil")
		//karena biar pas inputan user & pw nya bener dia jadi ngeoutputin Login berhasil ga 2x gitu Login berhasilnya
	if (user == "indra")
		cout<<"Login ";
	
	if (pw == "rasta")
		cout<<"berhasil"<<endl;
		
	else
		cout<<"Akun Tidak Valid!"<<endl;
		
	
	
}
