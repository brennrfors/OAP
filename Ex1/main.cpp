#include <iostream>
#include "calc.h"

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	Calc* calc = new Calc();
	
	cout << "������� ������ �����: ";
	int num1 = calc->getNum();
	cout << "������� ������ �����: ";
	int num2 = calc->getNum();
	cout << "������������ ���� �����: " << calc->mulNums(num1, num2) << endl;
	cout << "����� ���� �����: " << calc->sumNums(num1, num2) << endl;

}