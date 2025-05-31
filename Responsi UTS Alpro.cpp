#include <iostream>
#include <string>
using namespace std;
// Kode Soal B

//struct infoMhs {
//	int NIM;
//	string nama;
//	string prodi;
//	string fakultas;
//};

int main() {
	string user; 
	int pass;
	int angka;
	int pilih;
	int hapus;
	int beasiswa;
	int spp;
	
	cout << "Selamat Datang di Portal Akademik" << endl;
	cout << "Username : ";
	cin >> user;
	cout << "Password : ";
	cin >> pass;
	
	cout << "\nMasukkan angka (1-6): ";
	cin >> angka;
	
//	switch (pilih == 0) {
//		case 1:
//			cout << "NIM		: 12345678910";
//			cout << "Nama		: Lala";
//			cout << "Prodi		: Informatika";
//			cout << "Fakultas	: Teknologi Idustri";
//		break;
//		case 2:
//			cout << "Silahkan masukkan KRS yg akan diambil (1-3): ";
//			cin >> pilih;
//			cout << "KRS Semester 2";
//		break;
//		default:
//			cout << "Eror."
//	}
	
	do {
		if (angka == 1) {
			cout << "NIM		: 12345678910";
			cout << "Nama		: Lala";
			cout << "Prodi		: Informatika";
			cout << "Fakultas	: Teknologi Idustri";
		} else if (angka == 2) {
			cout << "Silahkan masukkan KRS yg akan diambil: ";
			cin >> pilih;
			cout << "KRS Semester 2";
			
			do {
				cout << "Masukkan angka untuk KRS : ";
				cin >> pilih;
				if (pilih == 1) {
					cout << "Alpro";
				} else if (pilih == 2) {
					cout << "Pweb";
				} else if (pilih == 3) {
					cout << "Madis";
				} else if (pilih == 4) {
					cout << "Arsikom";
				} else if (pilih == 5) {
					cout << "Bindo";
				} else if (pilih == 6) {
					cout << "Aljabar";
				} else {
					cout << "Data tidak ditemukan.";
				}
				cout << "KRS Anda: " << pilih << endl;
				
			} while (pilih == 'y' && pilih == 'Y') {
				cout << "Apakah Anda ingin menambah? (y/n): ";
			}
			
		} else if (angka == 3) {
			cout << "Apakah ada KRS yg akan dihapus? : ";
			cin >> hapus;
		} else if (angka == 4) {
			cout << "Jadwal Mata Kuliah" << endl;
		} else if (angka == 5) {
			for (int 1=0; i<5; i++) {
				int nilai[i] = {90, 91, 92, 93, 94, 95};
				cout << "Nilai: " << nilai[i] << endl;
			}
		} else if (angka == 5) {
			cout << "Masukkan beasiswa yang ingin Anda tambahkan: ";
			cin >> beasiswa;
		} else if (angka == 6) {
			cout << "Pilih metode pembayaran SPP: ";
			cin >> spp;
		} else {
			cout << "Erorrrrrrrrrr.";
		}
	} while (angka == 'y' && angka == 'Y') {
		cout << "Apakah ingin mengulang? (y/n): ";
	}
	
	return 0;
}
