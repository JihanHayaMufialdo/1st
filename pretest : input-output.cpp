#include <iostream>
using namespace std;
int main()
{

	//title
	cout<<"DATA PELANGGAN SEMBAKO"<<endl;
	cout<<""<<endl;
	
	/* 
	   Jihan Haya Mufialdo
	   Jl. Hangtuah IV No. 19, Pekanbaru
	   jihannhayaa@gmail.com
	   082268210439 
	*/
    
    //string
	string namapelanggan;
	string alamatrumah;
	string emailpelanggan;
	int nomortelepon;
	
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
