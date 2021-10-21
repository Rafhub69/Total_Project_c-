#include <iostream>
#include <cstdlib>
#include <string>
#include "Dane.h"

using namespace std;

data_input mainInput;

void pitagoras_triple()
{
    int x = 0, y = 0, a = 0, b = 0, c = 0;

    cout << " Podaj x ";
    x = mainInput.data();

    cout << " Podaj y ";
    y = mainInput.data();

    a = pow(x, 2) - pow(y, 2);
    b = 2 * x * y;
    c = pow(x, 2) + pow(y, 2);

    cout << "Trojka pitagorejska ma boki o dlugosci " << a << ", " << b << ", " << c << ", ";

}

void binary(int bin)
{
    if (bin >= 2) {
        binary(bin / 2);
        cout << bin % 2;
    }
    else
        cout << 1;
}

void fibonacci(int fib)
{
    long long a = 0, b = 1;

    for (int i = 0; i < fib; i++) {
        cout << b << " ";
        b += a;
        a = b - a;
    }
}

double silnia(int podstawa)
{
    if (podstawa == 0) {
        return 1;
    }
    else
        return silnia(podstawa - 1) * podstawa;
}

float potega(double might, float power)
{
    if (might == 0) {
        return 1;
    }

    else {
        cout << endl;
        return potega(might - 1, power) * power;
    }
}

void rekursja_control()
{
    int how_many = 0;
    double base = 0, strong = 0, power = 0;
    double might = 0, bin = 0, fib = 0, force = 0;

    cout << "Podaj co chcesz zrobic.\n 1 - potega\n 2 - zamiana na liczbe binarna\n 3 - ciag fibonacciego\n 4 - obliczenie silnii " << endl;
    how_many = mainInput.data();

    switch (how_many)
    {
    case 1:
        cout << "Podaj jaka liczbe chcesz spotegowac ";
        might = mainInput.data();
        cout << "Podaj potege ";
        power = mainInput.data();

        force = potega(power, might);
        cout << "Potega wynosi " << force << ".";
        break;

    case 2:
        cout << "Jaka liczbe chcesz zamienic na liczbe binarna? ";
        bin = mainInput.data();
        binary(bin);
        break;

    case 3:
        cout << "Ile chcesz wypisac wyrazow ci¹gu fibonacciego ? ";
        fib = mainInput.data();
        cout << "Ciag fibonacciego: ";
        fibonacci(fib);
        break;

    case 4:
        cout << "Podaj jaka liczbe chcesz zmienic na silnie ";
        base = mainInput.data();
        strong = silnia(base);
        cout << "Silnia wynosi " << strong << endl;
        break;

    default:
        cout << "Podales zla liczbe.";
        rekursja_control();
        break;
    }

    cout << endl;

}

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

		cout << "Jezeli chcesz skorzystac z odpowiedniej funkcji podaj jej numer. \n 1 - obliczanie wieku \n 2 - obliczenia zwiazane z rekursja" 
             << " 3 - obliczanie trojki pitagorejskiej \n 9 - zakonczenie dzialania programu " << endl;

		number = mainInput.data();

		switch (number)
		{
		case 1:
            age();
			break;
		case 2:
            rekursja_control();
			break;
        case 3:

            break;
        case 4:

            break;

		case 9:
			return 0;

		default:
			cout << "Podales zly numer";
		}

		number = 0;
	}
}