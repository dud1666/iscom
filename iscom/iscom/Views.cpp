#include <iostream>
#include "Views.h"

int password; //has³o u¿ytkownika
int choice; //przechowuje wybór u¿ytkownika w menu
std::string message; // wiadomosc u¿ytkownika chocia¿ pewnie inaczej to rozwi¹¿emy

void View::login()
{
	std::cout << "podaj haslo";
	std::cin >> password;
}

void View::dashboard()
{
	std::cout << "1 - wyœwietl grupy";
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
	std::cout << "przegl¹dasz grupê: " << std::endl; //tutaj podanie nazwy otwartej grupy
	std::cout << "Ostatnio otwierana: " << std::endl; //data kiedy ostatnio grupa by³a przegl¹dana je¿eli przechowujemy
	std::cout << "Wiadomoœci: " << std::endl; //poni¿ej wyœwietlane wiadomoœci w danej grupie

	std::cout << "Napisz wiadomoœæ: " << std::endl;
	std::cin >> message;
}