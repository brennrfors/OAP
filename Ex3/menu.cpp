#include <iostream>
#include "calc.h"

using namespace std;

int option()
{
	while (true)
	{
		int option1;
		cout << "1. ������� � 2 ��.\n" << "2. ������� � 8 ��.\n" << "3. ������� � 16 ��.\n";
		cin >> option1;
		if (!cin || option1 < 0)
		{
			cout << "������ ������!" << endl;
			cin.clear();
			cin.ignore();
			cin.sync();
		}
		switch (option1)
		{
		case 1:
		{
			Binari2();
			break;
		}
		case 2:
		{
			Binari8();
			break;
		}
		case 3:
		{
			Binari16();
			break;
		}
		default:
		{
			break;
		}
		}
	}
	return 0;
}

void rules()
{
}