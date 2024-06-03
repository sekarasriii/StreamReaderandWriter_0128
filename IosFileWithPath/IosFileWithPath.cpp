#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string Namafile;

	cout << "Masukkan Nama File : ";
	cin >> Namafile;

	//membuka file dalam mode menulis
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open(Namafile + ".txt", ios::out);

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "-";
		getline(cin, baris);
		if (baris == "q") break;
		outfile << baris << endl;
	}
	outfile.close();

	//membuka file dalam mode membaca
	ifstream infile;
	//menunjuk ke sebuah file
	infile.open(Namafile + ".txt", ios::in);

	cout << endl << ">= Membuka dan membaca file" << endl;
	//jika file ada maka
	if (infile.is_open()) {
		while (getline(infile, baris)) {
			cout << baris << '\n';
		}
		infile.close();
	}
}