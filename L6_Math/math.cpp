#include<iostream>
#include<cmath>

using namespace std;

int main() {

	//sqrt - karek�k alma
	//pow - �s alma
	//round - en yak�n say�ya yuvarlama
	//ceil - en yak�n �st say�ya yuvarlama
	//floor - en yak�n alt say�ya yuvarlama
	//fmax - iki say�dan y�ksek olan� yazd�r
	//fmin - iki say�dan d���k olan� yazd�r

	int a = 5, b = 30, c = 144, f = 3;
	double d = 4.3, e = 5.1, g = 5.9;
	int x = 532, y = 233;

	cout << sqrt(c) << " olmasi gereken = 12" << endl;
	cout << pow(a, f) << " olmasi gereken = 125" << endl;
	cout << round(d) << " olmasi gereken = 4" << endl;
	cout << ceil(e) << " olmasi gereken = 6" << endl;
	cout << floor(g) << " olmasi gereken = 5" << endl;
	cout << fmax(x, y) << " olmasi gereken = 532" << endl;
	cout << fmin(x, y) << " olmasi gereken = 233" << endl;



	return 0;
}