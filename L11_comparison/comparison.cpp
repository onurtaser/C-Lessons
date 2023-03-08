#include<iostream>

using namespace std;

int maxSayi(int numa, int numb, int numc) {

	int sonuc;

	if (numa >= numb && numa >= numc) {

		sonuc = numa;

	}
	else if (numb >= numa && numb >= numc) {

		sonuc = numb;

	}
	else {

		sonuc = numc;

	}

	return sonuc;
}

int main() {

	cout << "En buyuk sayi= " << maxSayi(100, 253, 52);

	return 0;
}