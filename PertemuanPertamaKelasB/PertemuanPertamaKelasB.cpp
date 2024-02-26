#include <iostream>
using namespace std;

int main()
{//begin
	//numeric nPanjang, nLebar, nLuas
	//display 'Masukkan Panjang = '
	//accept nPanjang
	//display 'Masukkan Lebar = '
	//acccept nLebar
	//compute nLuas = nPanjang * nLuas
	//display 'Luasnya adalah = ' + nLuas

	int nPanjang, nLebar, nLuas;
	cout << "Masukkan Panjang = ";
	cin >> nPanjang;
	cout << "Masukkan Lebar = ";
	cin >> nLebar;
	nLuas = nPanjang * nLebar;
	cout << "Luasnya adalah = " << nLuas << endl;
}//end