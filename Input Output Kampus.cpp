#include <iostream>
using namespace std;

int main(){
	
	string prodi, jurusan, fakultas, univ;
	
	cout << "Prodi\t\t: ";
	getline(cin,prodi);
	cout << "Jurusan\t\t: ";
	getline(cin,jurusan);
	cout << "Fakultas\t: ";
	getline(cin,fakultas);
	cout << "Universitas\t: ";
	getline(cin,univ);
	
	cout << "Prodi\t\t: " << prodi;
	cout << "Jurusan\t\t: " << jurusan;
	cout << "Fakultas\t: " << fakultas;
	cout << "Universitas\t: " << univ;
	
	return 0;
}
