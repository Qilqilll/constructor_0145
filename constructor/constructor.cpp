#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
public:
	int nim;
	string nama;

public:
	Mahasiswa()
	{
		nim = 0;
		nama = "";
	};
	Mahasiswa(int iNim) {
		nim = iNim;
	}
	Mahasiswa(string iNama) {
		nama = iNama;
	}
	Mahasiswa(int iNim, string iNama);
	void cetak();
};
Mahasiswa::Mahasiswa(int iNim)
{
	nim = iNim;
}