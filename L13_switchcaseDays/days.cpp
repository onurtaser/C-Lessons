#include<iostream>

using namespace std;

string gunFonk(int gunSayi) {

	string gunAdi;

	switch (gunSayi) {
	case 0:
		gunAdi = "Pazartesi";
		break;
	case 1:
		gunAdi = "Salý";
		break;
	case 2:
		gunAdi = "Çarsamba";
		break;
	case 3:
		gunAdi = "Persembe";
		break;
	case 4:
		gunAdi = "Cuma";
		break;
	case 5:
		gunAdi = "Cumartesi";
		break;
	case 6:
		gunAdi = "Pazar";
		break;
	default:
		cout << "Gecersiz...";
		break;
	}
	return gunAdi;
}

int main() {

	cout << gunFonk(3);

	return 0;
}