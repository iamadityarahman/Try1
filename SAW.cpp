#include <iostream>
#include <cmath>
using namespace std;

void tampilMatrix3x5(double array[3][5]) {
	for(int x=0; x<3; x++) {
		cout << array[x][0];
		for(int y=1; y<5; y++) {
			cout << " | " << array[x][y];
		} cout << endl;
	} cout << endl;
}

int main(){
	// DEKLARASI VARIABEL, ARRAY DAN ISI DATA
	int x,y;
	double 	arrayM[5],
			arrayH[3],
			matrixR[3][5],
			matrixRxW[3][5],
			arrayW[5] = {5,3,4,4,2},
			array[3][5] = {
					{4,4,5,3,3},
					{3,3,4,2,3},
					{5,4,2,2,2}
			};

	// SETTING PRESISI DESIMAL
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);

	// AMBIL NILAI MAX TIAP KRITERIA
	for(x=0; x<5; x++) {
		arrayM[x] = max(array[0][x], max(array[1][x],array[2][x]));
	}

	// BUAT MATRIKS R
	for(x=0; x<3; x++) {
		for(y=0; y<5; y++) {
			matrixR[x][y] = array[x][y] / arrayM[y];
		}
	}

	// MATRIKS R * W
	for(x=0; x<3; x++) {
		for(y=0; y<5; y++) {
			matrixRxW[x][y] = matrixR[x][y] * arrayW[y];
		}
	}

	// PENJUMLAHAN HASIL R * W
	for(x=0; x<3; x++) {
		for(y=0; y<5; y++) {
			arrayH[x] += matrixRxW[x][y];
		}
	}

	// MENAMPILKAN NILAI
	cout << "MATRIKS X :" << endl;
	tampilMatrix3x5(array);

	cout << "MATRIKS R :"<<endl;
	cout << Ra1c1 <<" | "<<Ra1c2<<" | "<<Ra1c3<<" | "<<Ra1c4<<" | "<<Ra1c5<<endl;
	cout << Ra2c1 <<" | "<<Ra2c2<<" | "<<Ra2c3<<" | "<<Ra2c4<<" | "<<Ra2c5<<endl;
	cout << Ra3c1 <<" | "<<Ra3c2<<" | "<<Ra3c3<<" | "<<Ra3c4<<" | "<<Ra3c5<<endl;
	cout << endl;
	cout << "BOBOT W :"<<endl;
	cout << w1 <<" | "<<w2<<" | "<<w3<<" | "<<w4<<" | "<<w5<<endl;
	cout << endl;
	cout << "MATRIKS R * W :"<<endl;
	cout << RWa1c1 <<" | "<<RWa1c2<<" | "<<RWa1c3<<" | "<<RWa1c4<<" | "<<RWa1c5<<endl;
	cout << RWa2c1 <<" | "<<RWa2c2<<" | "<<RWa2c3<<" | "<<RWa2c4<<" | "<<RWa2c5<<endl;
	cout << RWa3c1 <<" | "<<RWa3c2<<" | "<<RWa3c3<<" | "<<RWa3c4<<" | "<<RWa3c5<<endl;
	cout << endl;
	cout << "HASIL AKHIR  :"<<endl;
	cout << "Nilai A1 : "<<ha1<<endl;
	cout << "Nilai A2 : "<<ha2<<endl;
	cout << "Nilai A3 : "<<ha3<<endl;
}
