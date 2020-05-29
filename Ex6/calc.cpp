#include <iostream>
#include <string>
#include "calc.h"

using namespace std;

string TranslatePart(int x, short p) {
	string third[] = { "", "���", "������", "������", "���������", "�������", "��������", "�������", "���������", "���������" };
	string second[] = { "", "", "��������", "��������", "�����", "���������", "����������", "���������", "�����������", "���������" };
	string second_1[] = { "������", "�����������", "����������", "����������", "������������", "����������", "�����������",
							"����������", "������������", "������������" };
	string first[] = { "", "����", "���", "���", "������", "����", "�����", "����", "������", "������" };
	string first_r[] = { "", "����", "���" };

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

	//��������� ��������� �����
	if (((int)(x / 10 % 10) == 1) || (d >= 5)) {
		switch (p) {
		case 6:
			result += "��������� ";
			break;
		case 3: result += "����� "; break;
		}
	}
	else if (p == 3) {
		switch (d) {
		case 1:
			result += "������ ";
			break;
		case 2:
		case 3:
		case 4:
			result += "������ ";
			break;
		default:
			result += "����� ";
			break;
		}
	}
	else if (p == 6) {
		switch (d) {
		case 1:
			result += "������� ";
			break;
		case 2:
		case 3:
		case 4:
			result += "�������� ";
			break;
		default:
			result += "��������� ";
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
		cout << "������� ����� �� 0 �� 100000000: ";
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
