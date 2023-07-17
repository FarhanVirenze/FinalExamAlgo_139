// UasAlgoritma_139.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


const int MAX_MAHASISWA = 100;

int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];

int jumlahMahasiswa = 0;


void tambahMahasiswa() {
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();
		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
};

void tampilkanSemuaMahasiswa() {
	if (jumlahMahasiswa == 0) {
		cout << "Tidak ada pada data mahasiswa " << endl;
	}
	else {
		cout << "==========Daftar Mahasiswa==========" << endl;
		for (int i = 0; i < jumlahMahasiswa; i++) {
			cout << "NIM : " << NIM[i] << endl;
			cout << "Nama : " << nama[i] << endl;
			cout << "TahunMasuk : " << tahunMasuk[i] << endl;
			cout << "============" << endl;
		}
	}
}

void algorithmacariMahasiswaByNIM() {
	cout << "Cari Mahasiswa Berdasarkan NIM. " << endl;
	int dicariNIM;
	cin >> dicariNIM;

	bool MahasiswaDitemukan = false;
	for (int i = 0; i < jumlahMahasiswa; i++) {
		if (NIM[i] == dicariNIM) {
			cout << "======Mahasiswa Ditemukan=====" << endl;
			cout << "NIM : " << NIM[i] << endl;
			cout << "Nama : " << nama[i] << endl;
			cout << "TahunMasuk : " << tahunMasuk[i] << endl;
			cout << "============" << endl;
			MahasiswaDitemukan = true;
			break;
		}
	}

	if (MahasiswaDitemukan) {
		cout << "Mahasiswa dengan NIM tersebut tidak ada" << endl;

	}
}

void algorithmaSortByTahunMasuk() {

}

int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();

		switch (pilihan) {
		case 1:
			tambahMahasiswa();
			break;
		case 2:
			tampilkanSemuaMahasiswa();
			break;
		case 3:
			algorithmacariMahasiswaByNIM();
			break;
		case 4:
			algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);

	return 0;
}

//2. Berdasarkan studi kasus diatas, algoritma apa saja yang anda gunakan?
//  jawab  pada kasus diatas saya menggunakan Algoritma
//        1. InsertionSort
//        2. LinearSearch

//3. Stack biasanya menggunakan LIFO (Last In Firts Out) dan Queue biasanya menggunakan FIFO (Firts In Firts Out)
//4.Queue biasanya digunakan untuk Menghapus data / Meng-undo Data
//5. a.) 4 kedalaman
//   b.) Preorder = 25 20 10 5 1 8 12 15 22 36 30 28 40 38 48 45 50

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
