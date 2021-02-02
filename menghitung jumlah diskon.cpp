#include <iostream>
using namespace std;
int main(){
	int x, dc, h;
	cout<<"Masukan jumlah belanjaan (menggunakan bilangan bulat)" : Rp.";
	cin>>x;
	if (x >= 100000){
		dc = x *0.15;
		h = x - dc;
		cout<<"jumlah yang harus dibayar dengan diskon 15% adalah : Rp. "<<h;
	}
	else if(x >= 50000){
		dc = x * 0.125;
		h = x dc;
		cout<<"jumlah yang harus dibayar dengan diskon 12.5% adalah :" Rp. "<<h;
	}
	else if(x >= 25000){
		dc = x * 0.10;
		h = x - dc;
		cout<<"jumlah yang harus dibayar dengan diskon 10% adalah : Rp."<<x;
	}
	else if(x >= 0){
	cout<<"jumlah yang harus dibayar adalah : Rp. "<<x;
	}
	else{
		cout<<"masukan nominal jumlah belanjaan diatas 0";
	}
	return 0;
	
	}
