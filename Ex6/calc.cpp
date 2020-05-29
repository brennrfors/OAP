#include <iostream>
#include <string>
#include "calc.h"

using namespace std;

string TranslatePart(int x, short p) {
	string third[] = { "", "сто", "двести", "триста", "четыреста", "п€тьсот", "шестьсот", "семьсот", "восемьсот", "дев€тьсот" };
	string second[] = { "", "", "двадцать", "тридцать", "сорок", "п€тьдес€т", "шестьдес€т", "семьдес€т", "восемьдес€т", "дев€носто" };
	string second_1[] = { "дес€ть", "одиннадцать", "двенадцать", "тринадцать", "четырнадцать", "п€тнадцать", "шестнадцать",
							"семнадцать", "восемнадцать", "дев€тнадцать" };
	string first[] = { "", "один", "два", "три", "четыре", "п€ть", "шесть", "семь", "восемь", "дев€ть" };
	string first_r[] = { "", "одна", "две" };

	string result = "";
	int f;
	bool stop = false;
	int d = x / 100 % 10;

	if (x == 0) return "";

	switch (d) {
	case 0:
		break;
	default:
		result += third[d];
		result += " ";
		break;
	}
	d = (int)(x / 10 % 10);
	if (d != 0) {
		switch (d) {
		case 1:
			f = x % 10;
			result += second_1[f];
			stop = true;
			break;
		default:
			result += second[d];
			break;
		}
		result += " ";
	}
	d = x % 10;
	if (!stop && (d != 0)) {
		switch (d) {
		case 1:
		case 2:
			if (p == 3) result += first_r[d];
			else result += first[d];
			break;
		default:
			result += first[d];
			break;
		}
		result += " ";
	}

	//добавл€ем остальные слова
	if (((int)(x / 10 % 10) == 1) || (d >= 5)) {
		switch (p) {
		case 6:
			result += "миллионов ";
			break;
		case 3: result += "тыс€ч "; break;
		}
	}
	else if (p == 3) {
		switch (d) {
		case 1:
			result += "тыс€ча ";
			break;
		case 2:
		case 3:
		case 4:
			result += "тыс€чи ";
			break;
		default:
			result += "тыс€ч ";
			break;
		}
	}
	else if (p == 6) {
		switch (d) {
		case 1:
			result += "миллион ";
			break;
		case 2:
		case 3:
		case 4:
			result += "миллиона ";
			break;
		default:
			result += "миллионов ";
			break;
		}
	}

	return result;
}

int maine() {
	long d, m = 1;
	short k = 0;
	int x = 1;
	string rez = "";
	input:
	do {
		cout << "¬ведите число от 0 до 100000000: ";
		cin >> d;
		if (!cin || d < 0) {
			cin.clear();
			while (cin.get() != '\n');
			goto input;
		}
	} while ((d < 0) || (d > 100000000));

	while (k <= 6) {
		x = d / m % 1000;
		rez.insert(0, TranslatePart(x, k));
		m *= 1000;
		k += 3;
	}
	cout << rez << endl;
	return 0;
}

string TranslatePart()
{
	return string();
}
