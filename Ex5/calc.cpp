#include <iostream>
#include "calc.h"

using namespace std;

void deposit() {
	float sumDeposit = 0; 
	float Deposit = 0;
	float viruchka = 0;
	int kolvoMonth = 0; 
	float pribil = 0; 
	float stavka = 5; 
	int daysInYear = 365;
	int daysInMonth = 30;

	q:
	cout << "������� ����� �������� � ��������: ";
	cin >> sumDeposit;
	if (!cin || sumDeposit < 0) {
		cout << "������ �����!" << endl;
		cin.clear();
		while (cin.get() != '\n');
		goto q;
	}

	w:												//�������� ������
	cout << "������� ���������� �������: ";
	cin >> kolvoMonth;
	if (!cin || kolvoMonth < 0) {
		cout << "������ �����!" << endl;
		cin.clear();								//��������� ������, � ������ ����� ���� � �������������� �����
		while (cin.get() != '\n');					//����� �� ������, ���� �������� 
		goto w;										//������� � ������, � ������ ������
	}

	cout << "������� � �������� � �����: ";
	cout << endl;
	for (int n = 1; n <= kolvoMonth; n++) {
		pribil = sumDeposit * (stavka / 100) / daysInYear * daysInMonth;
		Deposit = pribil + Deposit;
		viruchka = pribil + Deposit;

		cout << n << " �����: " << viruchka << " $" << " ����� �� �����: " << sumDeposit + viruchka << endl;
	}
	

	cout << "������� �� ���� ����: ";
	pribil *= kolvoMonth;
	cout << pribil << " $" << endl;

	cout << "����� ����� ������� � ����� �����: " << sumDeposit + pribil << " $";
	cout << endl;
}