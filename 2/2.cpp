#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
	static long int nim;
public:
	long int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(int pNim) { nim = pNim; }
	static int getNim() { return nim; }

	mahasiswa(string pnama)
	{
		nama = pnama;
		setID();
	}
};

long int mahasiswa::nim = 20230140145;
void mahasiswa::setID()
{
	id = ++nim;
}
void mahasiswa::printAll()
{
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main()
{
	mahasiswa mhs1("Aqil firdaus");
	mahasiswa mhs2("Damar sadewi");
	mahasiswa::setNim(9);
	mahasiswa mhs3("Dipa Prayoga");
	mahasiswa mhs4("Zaki Mahogra");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "akses dari luar object = " << mahasiswa::getNim() << endl;
}