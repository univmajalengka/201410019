#include <iostream>
#include <string>
#include <conio.h>

using namespace std ;
//deklarasi global
const float persetunjangan = 0.2;
const float persenpajak = 0.15;

void garis():	

int main() {
	//deklarasi 
	string nama karyawan;
	int gajibersih,gajipokok,pajak,tunjangan;
	//input
	cout << " Progam Menghitung Gaji Bersih: "; "<< endl;
	garis();
	cout << "Masukan Nama Karyawan : Rp. ";
	getline(cin,namakaryawan;) 
	cout << "Masukan Gaji Pokok Karyawan : Rp. ";
	cin >> gajipokok;
	garis();
	//proses
	tunjangan = persentunjangan * gajipokok;
	pajak =persepajak * gajipokok;
	gajibersih = gajipokok + tunjangna - pajak;
	
//output
cout<<"|----------------------------|\n";
cout<<"| Perincian     :" << endl;
cout<<"| Nama Karyawan :" << namakaryawan << endl;
cout<<"| Gaji Pokok    : Rp. " << gajipokok << endl;
cout<<"| Tunjangan     : Rp. " << tunjangan << endl;
cout<<"| Pajak         : Rp. " <<pajak << endl;
cout<<"| Gaji Bersih Yang Diterima    Rp " << gajibersih << endl;
cout<<"------------------------------|" << endl;


return 0;
}
void garis (){
	cout << "-------------------------\n" << endl;
}
