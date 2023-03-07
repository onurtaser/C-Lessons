#include<iostream>

using namespace std;

int main() {

	bool man = false;
	bool tall = false;

	if (man && tall) {

		cout << "You are a tall man.";

	}
	else if (man && !tall) {

		cout << "You are a short man.";

	}
	else if (!man && tall) {

		cout << "You are a tall woman.";

	}
	else {

		cout << "You are a short woman.";

	}


}