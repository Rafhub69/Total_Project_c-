#include <iostream>
#include <cstdlib>
#include <string>
#include "Dane.h"

using namespace std;

data_input mainInput;

void age()
{

    float years = 0, month = 0, rest = 0;
    int minutes = 0, second = 0, day = 0, roor = 0;
    int year = 0, minute = 0, seconds = 0, hours = 0;

    constexpr int oneday = 365;
    constexpr int onehour = 24 * oneday;
    constexpr int oneminute = 60 * onehour;
    constexpr int onesecond = 60 * oneminute;

    cout << "Podaj jak chcesz wprowadzic date. 0 to liczba niecalkowita, 1 to podanie dokladnej liczby lat i miesiecy ";
    roor = mainInput.data();
    cout << endl;

    switch (roor)
    {
    case 0:
    {
        cout << "Podaj ile masz lat. ";
        years = mainInput.data_float();
        year = years;
        rest = years - year;
        month = rest * 12;

        break;
    }
    case 1:
    {
        cout << "ile masz lat? ";
        years = mainInput.data();

        while (years > 120)
        {
            cout << "Podales zly rok, podaj jeszcze raz. ";
            month = mainInput.data();
        }

        cout << "Ile masz miesiecy? ";
        month = mainInput.data();

        while (month > 12)
        {
            cout << "Podales zly miesiac, podaj jeszcze raz. ";
            month = mainInput.data();
        }

        day = oneday * years + oneday * month;
        hours = onehour * years + onehour * month;
        minutes = oneminute * years + oneminute * month;
        second = onesecond * years + onesecond * month;
        break;
    }

    default:
    {
        cout << "Poda³eœ z³¹ liczbê.";
    }

    }

    cout << "Masz " << years << " lat, " << month << " miesiecy" << endl;

}


int main()
{
	int number = 0;

	while (true)
	{
		system("cls");

		cout << "Jezeli chcesz skorzystac z odpowiedniej funkcji podaj jej numer. \n 1 - obliczanie wieku" << endl;

		number = mainInput.data();

		switch (number)
		{
		case 1:
            age();
			break;
		case 2:

			break;

		case 9:
			return 0;

		default:
			cout << "Podales zly numer";
		}

		number = 0;
	}
}