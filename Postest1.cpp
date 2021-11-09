#include <iostream>
using namespace std;
int main (){
	
	/* JIHAN HAYA MUFIALDO
	   2117051095
	   KELAS B
	*/
	
	cout << "--------------------------------MEMBUAT AKUN SIAKADU---------------------------------" << endl;
	
	cout << "" << endl;
	
	cout << "masukkan NPM, tanggal lahir, bulan lahir, dan tahun lahir anda dalam 4 baris beruntun" << endl;
	
	cout << "" << endl;
	
	int     NPM            ;
	int     tanggalahir    ; 
	string  bulanlahir     ;
	int     tahunlahir     ;
	
	//input
	cin  >> NPM         ;
	cin  >> tanggalahir ;
	cin  >> bulanlahir  ;
	cin  >> tahunlahir  ;
	 
	cout << "" << endl;
	
	cout << "DATA AKUN SIAKADU ANDA :" << endl;
	
	cout << "" << endl;
	
	//output
	
	cout << "USERNAME : " << NPM << endl;
	cout << "PASSWORD : " << tahunlahir << bulanlahir << tanggalahir << endl;
	
	return 0;
}
