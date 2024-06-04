#include <iostream>
using namespace std;

int main()
{

	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		//throw 0.5;// melemparkan sebuah integer maka
		cout << "Pernyataan tidak akan dieksekusikan" << endl;
	}
	catch (int a) {
		//blok ini akan dieksekusi
		cout << "Pengecualian akan dieksekusi" << endl;
	}
	catch (...) {
		//jika selain integer maka block ini aka dieksekusi
		cout << "default pengecualain dieksekusi" << endl;
	}

	return 0;
}