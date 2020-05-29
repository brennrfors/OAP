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
	cout << "¬ведите сумму депозита в долларах: ";
	cin >> sumDeposit;
	if (!cin || sumDeposit < 0) {
		cout << "ќшибка ввода!" << endl;
		cin.clear();
		while (cin.get() != '\n');
		goto q;
	}

	w:												//создание лейбла
	cout << "¬ведите количество мес€цев: ";
	cin >> kolvoMonth;
	if (!cin || kolvoMonth < 0) {
		cout << "ќшибка ввода!" << endl;
		cin.clear();								//остановка потока, в случае ввода букв и отрицательного числа
		while (cin.get() != '\n');					//выбор из потока, всех символов 
		goto w;										//переход к лейблу, в случае ошибки
	}

	cout << "ѕрибыль с депозита в мес€ц: ";
	cout << endl;
	for (int n = 1; n <= kolvoMonth; n++) {
		pribil = sumDeposit * (stavka / 100) / daysInYear * daysInMonth;
		Deposit = pribil + Deposit;
		viruchka = pribil + Deposit;

		cout << n << " мес€ц: " << viruchka << " $" << " всего на счЄте: " << sumDeposit + viruchka << endl;
	}
	

	cout << "ѕрибыль за весь срок: ";
	pribil *= kolvoMonth;
	cout << pribil << " $" << endl;

	cout << "ќбща€ сумма выплаты в конце срока: " << sumDeposit + pribil << " $";
	cout << endl;
}