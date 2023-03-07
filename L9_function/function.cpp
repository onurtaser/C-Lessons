#include<iostream>

using namespace std;

void merhaba(string isim, int yas) {

	cout << "Merhaba " << isim << "\t" << yas << " yasindasin." << endl;

}

int main() {

	merhaba("onur", 22);
	merhaba("mehmet", 55);
	merhaba("ayse", 32);

	return 0;
}