#include<iostream>
#include <cstdlib>

using namespace std;


int fonk() {

	int sayi;

	cout << "1-5 Arasinda tuslama yapiniz: ";
	cin >> sayi;

	switch (sayi) {
	case 1:
		cout << "\n1 Tuslandi...\n\n";
		break;
	case 2:
		cout << "\n2 Tuslandi...\n\n";
		break;
	case 3:
		cout << "\n3 Tuslandi...\n\n";
		break;
	case 4:
		cout << "\n4 Tuslandi...\n\n";
		break;
	case 5:
		cout << "\n5 Tuslandi...\n\n";
		break;
	default:
		cout << "\nYanlis Tuslama Yaptiniz...\n\n";
		break;
	}

	

	if (sayi == 1) {
		cout << "Tebrikler..\n\n";
	}

	else if (sayi == 2) {
		cout << "Tebrikler..\n\n";
	}

	else if (sayi == 3) {
		cout << "Tebrikler..\n\n";
	}

	else if (sayi == 4) {
		cout << "Tebrikler..\n\n";
	}

	else if (sayi == 5) {
		cout << "Tebrikler..\n\n";
	}

	else {

		cout << "Tekrar denemenizi isteyecegim: ";
		cin >> sayi;

		if (sayi == 1) {
			cout << "\n1 Tuslandi...\n\n";
		}
		else if (sayi == 2) {
			cout << "\n2 Tuslandi...\n\n";
		}
		else if (sayi == 3) {
			cout << "\n3 Tuslandi...\n\n";
		}
		else if (sayi == 4) {
			cout << "\n4 Tuslandi...\n\n";
		}
		else if (sayi == 5) {
			cout << "\n5 Tuslandi...\n\n";
		}
		else {
			cout << "\nMaalesef istenilen tuslamayi yapmadiniz...\n\n";
		}
	}
	return sayi;
}



int main() {

	fonk();

	return 0;
}