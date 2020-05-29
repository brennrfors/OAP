#include <iostream>
#include "calc.h"

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	Calc* calc = new Calc();
	
	cout << "Введите первое число: ";
	int num1 = calc->getNum();
	cout << "Введите второе число: ";
	int num2 = calc->getNum();
	cout << "Произведение двух чисел: " << calc->mulNums(num1, num2) << endl;
	cout << "Сумма двух чисел: " << calc->sumNums(num1, num2) << endl;

}