#include <windows.h>
using namespace std;
int main()
{
	int j,m,d,td;
	cout<<"Masuka Jam : ";
    cin>>j;
	cout<<"Masuka Menit : ";
    cin>>m;
	cout<<"Masuka Detik : ";
    cin>>d;
    td=(j*3600)+(m*60)+d;
    cout<<"Total Detik : "<<td;
    return 0;
}
