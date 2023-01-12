// Program untuk menghitung luas dan keliling lingkaran
#include <iostream>
#include <cmath>

using namespace std;

	int main ()
	
	{
	
	
  cout << "##  TUGAS 7 SEKUENSIAL/LINIER SEARCH  ##" << endl;
    cout << "====================================================" << endl;
    cout << endl;
    cout << "nama                 : Windha Aby Cahyo"<< endl;
    cout << "No Induk Mahasiswa   : 5520122010 "<< endl;
    cout << "Jurusan              : Informatika "<< endl;
    cout << "NOTE !!              : Cari NIM 4 Nomor dari belakang no nim Mahasiswa Contoh 2010 "<< endl;
    cout << endl;
    cout << "====================================================" << endl;
    cout << endl;
	
}

// Fungsi untuk menghitung luas lingkaran
double luas(double jariJari){
	double luas;
	luas = M_PI * jariJari * jariJari;
	return luas;
}

// Fungsi untuk menghitung keliling lingkaran
double keliling(double jariJari){
	double keliling;
	keliling = 2 * M_PI * jariJari;
	return keliling;
}

int main()
{
	double jariJari, luasLingkaran, kelilingLingkaran;
	
	// Input jari-jari
	cout << "Masukkan jari-jari lingkaran: ";
	cin >> jariJari;
	
	// Hitung luas dan keliling
	luasLingkaran = luas(jariJari);
	kelilingLingkaran = keliling(jariJari);
	
	// Tampilkan hasil
	cout << "Luas Lingkaran: " << luasLingkaran << endl;
	cout << "Keliling Lingkaran: " << kelilingLingkaran << endl;
	
	return 0;
}
