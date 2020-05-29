#include <iostream>
#include "constants.h"

using namespace std;
// Ïîëó÷àåì íà÷àëüíóþ âûñîòó îò ïîëüçîâàòåëÿ è âîçâðàùàåì å¸
double getInitialHeight()
{
	setlocale(LC_ALL, "Russian");

	cout << "Ââåäèòå âûñîòó áàøíè â ìåòðàõ: ";
	double initialHeight;
	cin >> initialHeight;

	if (initialHeight < 0)
	{
		cout << "Îøèáêà ââåäåííîé âûñîòû \n" << endl;
		cin.clear();
		cin.ignore();
		cin.sync();
		
		exit(0);
	}


	return initialHeight;
}

// Âîçâðàùàåì ðàññòîÿíèå îò çåìëè ïîñëå "..." ñåêóíä ïàäåíèÿ
double calculateHeight(double initialHeight, int seconds)
{
	double distanceFallen = (myConstants::gravity * seconds * seconds) / 2;
	double currentHeight = initialHeight - distanceFallen;

	return currentHeight;
}

// Âûâîäèì âûñîòó, íà êîòîðîé íàõîäèòñÿ ìÿ÷èê ïîñëå êàæäîé ñåêóíäû ïàäåíèÿ 
void printHeight(double height, int seconds)
{
	if (height > 0.0)
		cout << "Íà " << seconds << " ñåêóíäå, ìÿ÷ íàõîäèëñÿ íà âûñîòå: " << height << " ìåòðîâ\n";
	else
		cout << "Íà " << seconds << " ñåêóíäå, ìÿ÷ íàõîäèòñÿ íà çåìëå.\n";
}

void calculateAndPrintHeight(double initialHeight, int seconds)
{
	double height = calculateHeight(initialHeight, seconds);
	printHeight(height, seconds);
}

int main()
{
	const double initialHeight = getInitialHeight();

	calculateAndPrintHeight(initialHeight, 0);
	calculateAndPrintHeight(initialHeight, 1);
	calculateAndPrintHeight(initialHeight, 2);
	calculateAndPrintHeight(initialHeight, 3);
	calculateAndPrintHeight(initialHeight, 4);
	calculateAndPrintHeight(initialHeight, 5);

	return 0;
}