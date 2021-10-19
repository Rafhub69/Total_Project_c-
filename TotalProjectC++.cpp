#include <iostream>
#include <cstdlib>
#include <string>
#include "Dane.h"

using namespace std;

data_input mainInput;

int main()
{
	int number = 0;

	while (true)
	{
		system("cls");

		cout << "Jezeli chcesz skorzystac z odpowiedniej funkcji podaj jej numer." << endl;

		number = mainInput.data();

		switch (number)
		{
		case 1:
			break;

		case 9:
			return 0;

		default:
			cout << "Podales zly numer";
		}

		number = 0;
	}
}