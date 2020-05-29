#include <iostream>
#include "calc.h"

using namespace std;

void perevorot() {
	float n1;
	int n;
	input:
	cout << "Введите число: ";
	cin >> n;

	if (!cin || n < 0) {
		cout << "Ошибка ввода!" << endl;
		cin.clear();
		while (cin.get() != '\n');
		goto input;
	}

	cout << "Ваше число наоборот = ";
	while (n > 0) {
		n1 = n % 10;
		n = n / 10;
		cout << n1;
	}
	cout << endl;
}

