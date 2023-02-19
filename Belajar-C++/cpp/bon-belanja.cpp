#include <iostream>
#include <ctime>
using namespace std;

int main ()
{
	int pilih,jml,uang,kembalian;
	double harga,total,disc,hargadanppn,ppn;
		
	cout<<"12523. Detergen"<<endl;
	cout<<"12452. Roti Sobek"<<endl;
	cout<<"13651. Pasta Gigi"<<endl;
	cout<<"13421. Air Mineral"<<endl;
	cout<<"14782. Kopi"<<endl;
	
	cout<<" belanjaan : ";
	cin>>pilih;
	cout<<" jumlah : ";
	cin>>jml;
	
	
	
	
	cout<<endl;
	cout<<endl;	cout<<endl;	cout<<endl;	cout<<endl;
	
	cout<<"            ALFAMART STA,DEPOK BARU                          "<<endl;
	cout<<"      PT.SUMBER REZEKI ALFARIA JAYA, TBK                     "<<endl;
	cout<<endl;
	
	cout<<"  JL. MH. THAMRIN NO. 9, CIKOKOL, TANGERANG "<<endl;
	cout<<"        NPWP  :  02.274.569.7-054.000"<<endl;
	cout<<" JL. NAMING D BOTHIN, DEPOK, (ST DEPOK BARU)"<<endl;
	cout<<" ==========================================="<<endl;
	cout<<" Bon    KR82-903-1793MT8  ";
	cout<<" Kasir  :  Agoes "<<endl;
	cout<<" ==========================================="<<endl;

	switch(pilih)
	{
		case 12523:
			cout<< " DETERGEN RANSO 900ML  ";
			cout<<jml;
			disc=0;
			harga=25000;
			hargadanppn=harga*110/100-disc;
			cout<<"   "<<hargadanppn;
			total=jml*hargadanppn;
			cout<< "      "<<total<<endl;
			break;
			
		case 12452:
			cout<< " ROTI SOBEK INTI ROTI ";
			cout<<jml;
			disc=2500;
			harga=18000;
			hargadanppn=harga*110/100-disc;
			cout<<" "<<hargadanppn;
			total=jml*hargadanppn;
			cout<< "   "<<total<<endl;
			cout<<" Disc.                                 "<<disc*jml<<endl;
			break;
			
		case 13651:
			cout<< " PASTA GIGI PAPSODENT 190ML ";
			cout<<jml;
			disc=0;
			harga=26000;
			hargadanppn=harga*110/100-disc;
			cout<<" "<<hargadanppn;
			total=jml*hargadanppn;
			cout<< "   "<<total<<endl;
			cout<<" Disc.                                 "<<disc*jml<<endl;
			break;
		
		case 13421:
			cout<< " AIR MINERAL AQUB 600ML      ";
			cout<<jml;
			disc=0;
			harga=5000;
			hargadanppn=harga*110/100-disc;
			cout<<" "<<hargadanppn;
			total=jml*hargadanppn;
			cout<< "   "<<total<<endl;
			cout<<" Disc.                                 "<<disc*jml<<endl;
			break;
		
		case 14782:
			cout<< " KOPI KAPAL LAUT 250G         ";
			cout<<jml;
			disc=1500;
			harga=19000;
			hargadanppn=harga*110/100-disc;
			cout<<" "<<hargadanppn;
			total=jml*hargadanppn;
			cout<< "   "<<total<<endl;
			cout<<" Disc.                                 "<<disc*jml<<endl;
			break;
	}
	cout<<" -------------------------------------------"<<endl;
	cout<<" Total Item    ";
	cout<<"   "<<jml;
	cout<<"                    "<<total<<endl;
	cout<<" Total Disc.";
	cout<<"                           "<<disc*jml<<endl;
	cout<<" Total Belanja ";
	cout<<"                        "<<total<<endl;
	cout<<" Tunai                                ";
	cin>>uang;
	cout<<endl;
	kembalian=uang-total;
	cout<<" Kembalian                             "<<kembalian<<endl;
	ppn=(hargadanppn*jml)-(harga-disc)*jml;
	cout<<" PPN    ( "<<ppn; cout<<" )"<<endl;
	cout<<" =========================================== "<<endl;
  cout<<" Tgl.    ";
   time_t now = time(0);
   tm *ltm = localtime(&now);
   
   cout <<  ltm->tm_mday << "-";
   cout << 1 + ltm->tm_mon<<"-";
   cout << 1900 + ltm->tm_year; 
   cout <<"   ";
   cout << ltm->tm_hour << ":";
   cout << ltm->tm_min << ":";
   cout << ltm->tm_sec;
   cout <<"  V.2019.09.7 "<<endl;
   cout <<" -------------------------------------------"<<endl;
   cout<<" Kritik&Saran : 1400235,  SMS : 0813527951 "<<endl;
	cout<<endl;	cout<<endl;
}
