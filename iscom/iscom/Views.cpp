#include <iostream>
#include "Views.h"

int password; //has�o u�ytkownika
int choice; //przechowuje wyb�r u�ytkownika w menu
std::string message; // wiadomosc u�ytkownika chocia� pewnie inaczej to rozwi��emy

void View::login()
{
	std::cout << "podaj haslo";
	std::cin >> password;
}

void View::dashboard()
{
	std::cout << "1 - wy�wietl grupy";
	std::cout << "2 - ustawienia";
	std::cin >> choice;

	switch (choice)
	{

	case 1:
		{

		}

	case 2:
		{

		}


	}
}

void View::specyficgroup()
{
	std::cout << "przegl�dasz grup�: " << std::endl; //tutaj podanie nazwy otwartej grupy
	std::cout << "Ostatnio otwierana: " << std::endl; //data kiedy ostatnio grupa by�a przegl�dana je�eli przechowujemy
	std::cout << "Wiadomo�ci: " << std::endl; //poni�ej wy�wietlane wiadomo�ci w danej grupie

	std::cout << "Napisz wiadomo��: " << std::endl;
	std::cin >> message;
}