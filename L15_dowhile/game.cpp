#include<iostream>

using namespace std;

int main() {

	int sayi = 7;
	int tahmin = 0;
	int tahminSayac = 0;
	int tahminLimit = 3;
	bool tahminBiter = false;

	while (sayi != tahmin && !tahminBiter) {

		if (tahminSayac < tahminLimit) {
			cout << "Tahmininizi giriniz: ";
			cin >> tahmin;
			tahminSayac++;
		}
		else {
			tahminBiter = true;
		}
	}

	if (tahminBiter) {
		cout << "Hakkiniz kalmadi.\n";
	}
	else {
		cout << "Tebrikler!...";
	}


	return 0;

}