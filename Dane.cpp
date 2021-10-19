#include <iostream>
#include <cstdlib>
#include <string>
#include "Dane.h"

using namespace std;

int data_input::data()
{
	//Funkcja s³u¿¹ca do obliczania liczb typu int.
	int x = 0, k = 0;
	string text = "ddddd", help;
	getline(cin, help);
	text.insert(0, help);

	for (int i = 0; i < (text.size() - 5); i++)
	{
		if ((47 > text[i]) || (text[i] > 58))
		{
			k += (int)text[i];
			x = k + x;
		}

		else if (((47 < text[i + 5]) && (text[i + 5] < 58)) && ((47 < text[i + 4]) && (text[i + 4] < 58)) && ((47 < text[i + 3]) && (text[i + 3] < 58)) && ((47 < text[i + 2]) && (text[i + 2] < 58)) && ((47 < text[i + 1]) && (text[i + 1] < 58)) && ((47 < text[i]) && (text[i] < 58)))
		{
			x = (text[i] - 48) * 100000 + (text[i + 1] - 48) * 10000 + (text[i + 2] - 48) * 1000 + (text[i + 3] - 48) * 100 + (text[i + 4] - 48) * 10 + (text[i + 5] - 48) + x;
			i += 5;
		}

		else if (((47 < text[i + 4]) && (text[i + 4] < 58)) && ((47 < text[i + 3]) && (text[i + 3] < 58)) && ((47 < text[i + 2]) && (text[i + 2] < 58)) && ((47 < text[i + 1]) && (text[i + 1] < 58)) && ((47 < text[i]) && (text[i] < 58)))
		{
			x = (text[i] - 48) * 10000 + (text[i + 1] - 48) * 1000 + (text[i + 2] - 48) * 100 + (text[i + 3] - 48) * 10 + (text[i + 4] - 48) + x;
			i += 4;
		}

		else if (((47 < text[i + 3]) && (text[i + 3] < 58)) && ((47 < text[i + 2]) && (text[i + 2] < 58)) && ((47 < text[i + 1]) && (text[i + 1] < 58)) && ((47 < text[i]) && (text[i] < 58)))
		{
			x = (text[i] - 48) * 1000 + (text[i + 1] - 48) * 100 + (text[i + 2] - 48) * 10 + (text[i + 3] - 48) + x;
			i += 3;
		}

		else if (((47 < text[i + 2]) && (text[i + 2] < 58)) && ((47 < text[i + 1]) && (text[i + 1] < 58)) && ((47 < text[i]) && (text[i] < 58)))
		{
			x = (text[i] - 48) * 100 + (text[i + 1] - 48) * 10 + (text[i + 2] - 48) + x;
			i += 2;
		}

		else if (((47 < text[i + 1]) && (text[i + 1] < 58)) && ((47 < text[i]) && (text[i] < 58)))
		{
			x = (text[i] - 48) * 10 + (text[i + 1] - 48) + x;
			i++;
		}

		else if ((47 < text[i]) && (text[i] < 58))
		{
			x = (text[i] - 48) + x;
		}
	}

	while (x < 0)
	{
		cout << "Podano niepoprawn¹ wartoœæ, wprowadŸ ponownie. ";
		x = data();
	}

	return x;
}

float data_input::data_float()
{
	float x = 0;
	cin >> x;

	while (x < 0)
	{
		cout << "Podales nieprawidlowa liczbe, podaj j¹ jeszcze raz. ";
		cin >> x;
	}

	cin.ignore();
	return x;
}

string  data_input::data_string()
{
	string text;
	getline(cin, text);

	return text;
}