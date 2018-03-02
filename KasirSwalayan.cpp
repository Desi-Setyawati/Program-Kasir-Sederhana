#include <iostream>
#include <string>
using namespace std;

int harga[100],jumlah[100],sub=0;
string nama[100];
long nota,trans,bayar,total[100],diskon,ppn,grand,kembalian;



int main (void) {
	cout << "=======================================================================" << endl;
	cout << "                          Swalayan Berkah Jaya                         " << endl;
	cout << "=======================================================================" << endl;
	cout << "No.Nota : ";
	cin >> nota;
	cout << "Jumlah Transaksi : ";
	cin >> trans;
	cout << endl;

	for (int c=1;c<=trans;c++) {
		cout << "Transaksi Ke - " << c << endl;
		cout << "Nama Barang : ";
		cin >> nama[c];
		cout << "Harga Satuan : ";
		cin >> harga[c];
		cout << "Jumlah Beli : ";
		cin >> jumlah[c];
		cout << endl;
		total[c] = harga[c] * jumlah[c];
	}
	for (int d=1;d<=trans;d++) {sub = sub + total[d];}
	if (sub > 180000) {diskon = sub * 0.15;}
     else if (sub>70000){diskon = sub * 0.05;}
     else {diskon = 0;}
	ppn = 0.1 * sub;
	grand = sub - diskon + ppn;

	system ("cls");
	cout << "========================================================" << endl;
	cout << "|                  Swalayan Berkah Jaya                |" << endl;
	cout << "|                Jl. Permai Indah VI No.13-OK          |    " << endl;
	cout << "========================================================" << endl;
	cout << "|Nama Brg                 @Harga               Jml Beli|" << endl;
	cout << "========================================================" << endl;
	for (int m=1;m<=trans;m++) {
		cout << nama[m];
		cout << "                     " << harga[m];
		cout << "                     " << jumlah[m] << endl;
	}
	cout << "========================================================       " << endl;
	cout << "SubTotal    : Rp. "<< sub <<  endl;
    cout << "Diskon      : Rp. "<< diskon << endl;
    cout << "PPN 10%     : Rp. "<< ppn << endl;
    cout << "Grand Total : Rp. "<< grand << endl;
    cout << "Bayar       : Rp. "; cin >> bayar;
	kembalian = bayar - grand;
    cout << "Kembalian   : Rp. "<< kembalian << endl;
	cout << endl;
    cout << "Terimakasih Atas Kunjungan Anda !!!" << endl;
	cout << endl;
			system ("pause");
	return (0);
}
