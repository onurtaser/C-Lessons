#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int hesapMakinesi() {

	int islem;

	cout << "Lutfen asagidaki islemlerden herhangi birini seciniz.\n\n";
	cout << "Toplama Islemi icin 1\n";
	cout << "Cikarma Islemi icin 2\n";
	cout << "Bolme   Islemi icin 3\n";
	cout << "Carpma  Islemi icin 4\n";
	cout << "Tuslayiniz: ";
	cin >> islem;


	if (islem == 1) {
		int sayi1, sayi2, sonuc;

		cout << "Toplamak istediginiz iki sayiyi giriniz\n";
		cin >> sayi1 >> sayi2;
		sonuc = sayi1 + sayi2;

		return sonuc;

	} else if (islem == 2) {
		int sayi1, sayi2, sonuc;

		cout << "Cikarmak istediginiz iki sayiyi giriniz\n";
		cin >> sayi1 >> sayi2;
		sonuc = sayi1 - sayi2;

		return sonuc;

	} else if (islem == 3) {
		int sayi1, sayi2, sonuc;

		cout << "Bolmek istediginiz iki sayiyi giriniz\n";
		cin >> sayi1 >> sayi2;
		sonuc = sayi1 / sayi2;

		return sonuc;

	}
	else if (islem != 1, 2, 3, 4) {
	
		cout << "\nHatali tuslama yaptiniz.\n";

		return 0;

		//goto hesapMakinesi;
	}
	else {
		int sayi1, sayi2, sonuc;

		cout << "Carpmak istediginiz iki sayiyi giriniz\n";
		cin >> sayi1 >> sayi2;
		sonuc = sayi1 * sayi2;

		return sonuc;
	}

}

int main() {

	cout << "\nSonuc = " << hesapMakinesi();

	return 0;
}