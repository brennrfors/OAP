#include <iostream>
#include "calc.h"

using namespace std;

int option()
{
	while (true)
	{
		int option1;
		cout << "1. ѕеревод в 2 сс.\n" << "2. ѕеревод в 8 сс.\n" << "3. ѕеревод в 16 сс.\n";
		cin >> option1;
		if (!cin || option1 < 0)
		{
			cout << "ќшибка выбора!" << endl;
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