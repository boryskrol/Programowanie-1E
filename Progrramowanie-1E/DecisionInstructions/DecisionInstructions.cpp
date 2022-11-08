#include <iostream>

/*
DRY - don't repeat yourself - nie powtarzaj si�
*/

/*
Operatory por�wnania:
* r�wno�ci				==
* r�no�ci				!=
* wi�kszo�ci			>
* mniejszo�ci			<
* wi�ksze lub r�wne		>=
* mniejsze lub r�wne	<=
argument1 >= argument2
Wynikiem dzia�ania tych operator�w
jest warto�� logiczna true/false typu bool
bool zmienna = true;
bool zmienna2 = 5 > 74;
*/

/*
Operatory logiczna:
F - false
T - true
			  and		  or		not
A	B		A && B		A || B		!A
F	F		  F			  F			T
F	T		  F			  T			T
T	F		  F			  T			F
T   T		  T			  T			F
*/

/*
Napisz funkcj�, kt�a wczyta dwie liczby i wykona dzielenie na nich
*/
void task1()
{
	int firstNumber, secondNumber;

	std::cout << "Podaj pierwsza liczbe:\n";
	std::cin >> firstNumber;

	std::cout << "Podaj druga liczbe (nie podawaj zera):\n";
	std::cin >> secondNumber;

	//iloraz
	int quotient = 0;

	/*if (secondNumber != 0)
		quotient = firstNumber / secondNumber;
	if (secondNumber != 0)
		std::cout << "Iloraz: " << quotient << "\n";
	if (secondNumber == 0)
		std::cout << "Dzielenie przez zero!!!!\n";*/

	if (secondNumber != 0)
	{
		quotient = firstNumber / secondNumber;
		std::cout << "Iloraz: " << quotient << "\n";
	}
	else
	{
		std::cout << "Dzielenie przez zero!!!!\n";
	}

	std::cout << "Koniec programu\n";
}

/*
Napisz funkjc�, kt�ra wczyta liczb� i wy�wietli informacj�
czy jest ona dodatnia czy nie.
*/
void task2()
{
	int numberToCheck;

	std::cout << "Podaj liczbe do sprawdzenia:\n";
	std::cin >> numberToCheck;

	if (numberToCheck > 0)
		std::cout << "Liczba wi�ksza od zera\n";
	else
		std::cout << "Liczba r�wna lub mniejsza od zera\n";
}

/*
Napisz funkcj�, kt�ra wczyta liczb� i wy�wietli informacj�
czy jest ona w zakresie <10, 25>.
*/
void task3()
{
	int numberToCheck;

	std::cout << "Podaj liczbe do sprawdzenia:\n";
	std::cin >> numberToCheck;

	/*if (numberToCheck >= 10)
	{
		if (numberToCheck <= 25)
		{
			std::cout << "Liczba jest w zakresie\n";
		}
		else
		{
			std::cout << "Liczba nie jest w zakresie\n";
		}
	}
	else
	{
		std::cout << "Liczba nie jest w zakresie\n";
	}*/

	if (numberToCheck >= 10 && numberToCheck <= 25)
	{
		std::cout << "Liczba jest w zakresie\n";
	}
	else
	{
		std::cout << "Liczba nie jest w zakresie\n";
	}
}

/*
Napisz funkcj� kt�ra wczyta liczb� i wy�wietli informacj� czy jest ona parzysta czy nie.
*/
void task4()
{
	int sideNumber, area, circuit;
	std::cout << "Podaj bok kwadratu:\n";
	std::cin >> sideNumber;

	area = sideNumber * sideNumber;
	std::cout << "Pole" << area << "\n";

	circuit = sideNumber * 4;
	std::cout << "Obwod" << circuit << "\n"
	else
	{
	std:cout << "Liczba w minusie\n"
}

/*
Napisz funkcj� kt�ra wczyta liczb� kt�ra b�dzie bokiem kwadratu i wy�wietli� informacj� o polu i obwodzie.
*/
void task5()
{

}

/*
Zadanie 6
Napisz funkcj�, kt�ra wczyta dwie liczby i wy�wietli wi�ksz� z nich.
Zadanie 7
Napisz funkcj� kt�ra wczyta trzy liczby i wy�wietli najwi�ksz� z nich.
Zadanie 8
Napisz funkcj�, kt�ra wczyta dwie liczby i wy�wietli je w kolejno�ci rosn�cej.
Zadanie 9
Napisz funkcj�, kt�ra wczyta trzy liczby i wy�wietli je w kolejno�ci rosn�cej.
Zadanie 10
Napisz funkcj�, kt�ra wczyta numer dnia tygodnia i wy�wietli nazw� tego dnia.
Zadanie 11*
Napisz funkcj�, kt�ra wczyta wsp�czynniki r�wnania kwadratowego i wy�wietli pierwiastki tego r�wnania
Zadanie 12
Napisz funkcj�, kt�ra wy�wietli komunikaty "gor�co", "ciep�o", "zimno", "bardzo zimno"
w zale�no�ci od wczytanej temperatury
Zakresy: powy�ej 30, 15-30, 0-15 i poni�ej 0.
*/

int main()
{
	//task1();
	//task2();
	//task3();
	task4();
}