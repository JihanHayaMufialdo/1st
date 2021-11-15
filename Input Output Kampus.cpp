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
	
	cout << "\nProdi\t\t: " << prodi;
	cout << "\nJurusan\t\t: " << jurusan;
	cout << "\nFakultas\t: " << fakultas;
	cout << "\nUniversitas\t: " << univ;
	
	return 0;
}
