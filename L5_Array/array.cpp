#include<iostream>

using namespace std;

int main() {

	string phrase = "Izmir Bakircay University"; //our word.
				   //0123456789....
	cout << phrase << endl; //it prints
	cout << "Length of the words = " << phrase.length() << endl; // it prints length of the words with .length()
	cout << "ircay word starts from: " << phrase.find("ircay", 0) << endl; //find helps to find where letters start from.

	string phrasesub = phrase.substr(6, 8);
	cout << phrasesub << endl; // we defined the phrasesub to 6th length of our word and then write 8 letters we commanded

	return 0;
}