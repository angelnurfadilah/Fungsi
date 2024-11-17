#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

float pokok(int jamKerja);
float lembur(int jamKerja);
float makan(int jamKerja);
float jasa(int jamKerja);

int main(){
    int jam = 0;
	float total;
	char y = 'y';
	char nama[50];

	cout << setprecision(10);
	cout << "PT. Rezeki Nomplok \n";
	while( y == 'y' ){
		cout << "Karyawan" << endl;
		cout << "----------------" << endl;
		
		cout << "Nama:";
		cin >> nama;
		
		cout << "Jam Kerja:";
		cin >> jam;

        cout << "Gaji Pokok: " <<  pokok(jam) << endl;
        cout << "Uang Lembur:" <<  lembur(jam) << endl;
        cout << "Uang Makan:" <<  makan(jam) << endl;
        cout << "Uang Jasa:" <<  jasa(jam) << endl;
        
        total = pokok(jam) + lembur(jam) + makan(jam) + jasa(jam);

		cout << "Pilih y untuk lanjut";
		cin >> y;
	}
	
	return 0;
}

float pokok(int jamKerja){
	if(jamKerja > 7){
		return (7 * 2000);
	}
	else{
		return (jamKerja * 2000);
	}
}

float lembur(int jamKerja) {
	if( jamKerja > 7){
		return ( jamKerja - 7) * (2000 * 1.5);
	}
	else {
		return (0);
	}
}

float makan(int jamKerja){
	if( jamKerja >= 8 && jamKerja <= 10){
		return (1500);
	}
	else if( jamKerja > 10){
		return (2500);
	}
	else{
		return (0);
	}
}

float jasa(int jamKerja){
	if( jamKerja >= 9){
		return (3000);
	}
	else {
		return (0);
	}
}
