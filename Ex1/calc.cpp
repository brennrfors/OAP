#include <iostream>
#include "calc.h"
using namespace std;

int Calc::getNum()
{
	int input;
	cin >> input;

	if (!cin)
	{
		cout << "Ошибка ввода числа!" << endl << endl;
		cin.clear();
		cin.ignore();
		cin.sync();
		int input();
	}

	return input;
}

void Calc::printNum(double num)
{
	cout << num;
}

double Calc::sumNums(double num1, double num2)
{
	return num1 + num2;
}

double Calc::mulNums(double num1, double num2)
{
	return num1 * num2;
}