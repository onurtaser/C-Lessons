#include<iostream>
#include<cmath>

using namespace std;

int main() {

	int age;
	string name,school,department;

	cout << "Lutfen isminizi giriniz: ";
	cin >> name;
	cout << "Yasinizi giriniz: ";
	cin >> age;
	cout << "Okulunuzu giriniz: ";
	cin >> school;
	
	cout << "\nSayin " << name << " hanim\n" << age << " Yasindasiniz\n" << "Okulunuz " << school << " Universitesidir.\n\n\n";

	return 0;
}