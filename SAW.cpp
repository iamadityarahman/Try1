#include <iostream>
#include <cmath>
using namespace std;

int main(){
	// DEKLARASI VARIABEL
	double a1c1,a1c2,a1c3,a1c4,a1c5;
	double a2c1,a2c2,a2c3,a2c4,a2c5;
	double a3c1,a3c2,a3c3,a3c4,a3c5;

	double Ra1c1,Ra1c2,Ra1c3,Ra1c4,Ra1c5;
	double Ra2c1,Ra2c2,Ra2c3,Ra2c4,Ra2c5;
	double Ra3c1,Ra3c2,Ra3c3,Ra3c4,Ra3c5;

	double RWa1c1,RWa1c2,RWa1c3,RWa1c4,RWa1c5;
	double RWa2c1,RWa2c2,RWa2c3,RWa2c4,RWa2c5;
	double RWa3c1,RWa3c2,RWa3c3,RWa3c4,RWa3c5;

	double w1,w2,w3,w4,w5;
	double mc1,mc2,mc3,mc4,mc5;
	double ha1,ha2,ha3;

	// SETTING PRESISI DESIMAL
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);

	// ISI DATA
	w1=5;
	w2=3;
	w3=4;
	w4=4;
	w5=2;

	a1c1=4;
	a1c2=4;
	a1c3=5;
	a1c4=3;
	a1c5=3;

	a2c1=3;
	a2c2=3;
	a2c3=4;
	a2c4=2;
	a2c5=3;

	a3c1=5;
	a3c2=4;
	a3c3=2;
	a3c4=2;
	a3c5=2;

	// AMBIL NILAI MAX TIAP KRITERIA
	mc1=max(a1c1,max(a2c1,a3c1));
	mc2=max(a1c2,max(a2c2,a3c2));
	mc3=max(a1c3,max(a2c3,a3c3));
	mc4=max(a1c4,max(a2c4,a3c4));
	mc5=max(a1c5,max(a2c5,a3c5));

	// BUAT MATRIKS R
	Ra1c1 = (a1c1/mc1);
	Ra1c2 = (a1c2/mc2);
	Ra1c3 = (a1c3/mc3);
	Ra1c4 = (a1c4/mc4);
	Ra1c5 = (a1c5/mc5);

	Ra2c1 = (a2c1/mc1);
	Ra2c2 = (a2c2/mc2);
	Ra2c3 = (a2c3/mc3);
	Ra2c4 = (a2c4/mc4);
	Ra2c5 = (a2c5/mc5);

	Ra3c1 = (a3c1/mc1);
	Ra3c2 = (a3c2/mc2);
	Ra3c3 = (a3c3/mc3);
	Ra3c4 = (a3c4/mc4);
	Ra3c5 = (a3c5/mc5);

	// MATRIKS R * W
	RWa1c1 = Ra1c1*w1;
	RWa1c2 = Ra1c2*w2;
	RWa1c3 = Ra1c3*w3;
	RWa1c4 = Ra1c4*w4;
	RWa1c5 = Ra1c5*w5;

	RWa2c1 = Ra2c1*w1;
	RWa2c2 = Ra2c2*w2;
	RWa2c3 = Ra2c3*w3;
	RWa2c4 = Ra2c4*w4;
	RWa2c5 = Ra2c5*w5;

	RWa3c1 = Ra3c1*w1;
	RWa3c2 = Ra3c2*w2;
	RWa3c3 = Ra3c3*w3;
	RWa3c4 = Ra3c4*w4;
	RWa3c5 = Ra3c5*w5;

	// PENJUMLAHAN HASIL R * W
	ha1=RWa1c1+RWa1c2+RWa1c3+RWa1c4+RWa1c5;
	ha2=RWa2c1+RWa2c2+RWa2c3+RWa2c4+RWa2c5;
	ha3=RWa3c1+RWa3c2+RWa3c3+RWa3c4+RWa3c5;

	// MENAMPILKAN NILAI
	cout << "MATRIKS X :"<<endl;
	cout << a1c1 <<" | "<<a1c2<<" | "<<a1c3<<" | "<<a1c4<<" | "<<a1c5<<endl;
	cout << a2c1 <<" | "<<a2c2<<" | "<<a2c3<<" | "<<a2c4<<" | "<<a2c5<<endl;
	cout << a3c1 <<" | "<<a3c2<<" | "<<a3c3<<" | "<<a3c4<<" | "<<a3c5<<endl;
	cout << endl;
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
