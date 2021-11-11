#include <iostream>
using namespace std;
int main()
{

	//title
	cout<<"DATA PELANGGAN SEMBAKO"<<endl;
	cout<<""<<endl;
	
        //tipedata
	string namapelanggan;
	string alamatrumah;
	string emailpelanggan;
	int nomortelepon;
	
	//input
	getline (cin,namapelanggan);
	getline (cin,alamatrumah);
        cin>>emailpelanggan;
	cin>>nomortelepon;
	cout<<""<<endl;
	
	//output
	cout<<"Nama Pelanggan    :   "<<namapelanggan<<endl;
	cout<<"Alamat Rumah      :   "<<alamatrumah<<endl;
	cout<<"Email Pelanggan   :   "<<emailpelanggan<<endl;
	cout<<"Nomor Telepon     :   "<<nomortelepon<<endl;
	
	return 0;
}
