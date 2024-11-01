// UTS-24104410018-Mochamad Rivandi Hidayat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	int jumlahMotor, jumlahMobil, jamMasuk, jamKeluar;
	int tarifMobilPerJam = 5000;
	int tarifMotorPerJam = 2000;

	cout << "Masukkan jumlah motor : ";
	cin >> jumlahMotor;
	cout << "Masukkan jumlah mobil : ";
	cin >> jumlahMobil;
	cout << "Input jam masuk (format 24 jam) : ";
	cin >> jamMasuk;
	cout << "Input jam keluar (format 24 jam): ";
	cin >> jamKeluar;

	int durasi = jamKeluar - jamMasuk;
	if (durasi < 0){
		durasi += 24;

		int totalBiaya = (jumlahMotor * tarifMotorPerJam * durasi) + (jumlahMobil * tarifMobilPerJam * durasi);
	
	cout << "\n" << "Total biaya parkir : Rp " << totalBiaya << " (" << durasi << "jam)" << endl;

	return 0;
	}
}


