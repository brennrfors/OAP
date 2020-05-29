#include <iostream>
#include "calc.h"

using namespace std;

void Binari2() {
	int n;
	cout << "Введите число: ";
	cin >> n;
	cout << "Число после преобразования: ";
	while (n > 0) {
		(n % 2 == 0) ? cout << "0" : cout << "1";
		(n % 2 == 0) ? n = (n) / 2 : n = (n - 1) / 2;
	}
	cout << endl;
}

void Binari8() {
	int n;
	cout << "Введите число: " << endl;
	cin >> n;
	while (n > 0) {
		(n % 2 == 0) ? cout << "0" : cout << "1";
		(n % 2 == 0) ? n = (n) / 2 : n = (n - 1) / 2;
	}
	cout << endl;
}

void Binari16() {
	int n;
	cout << "Введите число: " << endl;
	cin >> n;
	while (n > 0) {
		(n % 2 == 0) ? cout << "0" : cout << "1";
		(n % 2 == 0) ? n = (n) / 2 : n = (n - 1) / 2;
	}
	cout << endl;
}