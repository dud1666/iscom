#include <iostream>
#include "Views.h"
#include "Core.h"

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
	std::cout << "1 - wy�wietl grupy"<<std::endl;
	std::cout << "2 - ustawienia";
	std::cin >> choice;

	switch (choice)
	{

	case 1:
		{
		groupList();
		}

	case 2:
		{
		options();
		}


	}
}

void View::groupList()
{
	GroupHandler gh;
	nlohmann::json groups = gh.get();

	for (const auto& item : groups.items())
	{
		std::cout << item.key() << "\n";
		for (const auto& val : item.value().items())
		{
			std::cout << "  " << val.key() << ": " << val.value() << "\n";
		}
	}
}

void View::options()
{

}



/*void View::singlegroup()
{
	std::cout << "przegl�dasz grup�: " << std::endl; //tutaj podanie nazwy otwartej grupy
	std::cout << "Ostatnio otwierana: " << std::endl; //data kiedy ostatnio grupa by�a przegl�dana je�eli przechowujemy
	std::cout << "Wiadomo�ci: " << std::endl; //poni�ej wy�wietlane wiadomo�ci w danej grupie

	std::cout << "Napisz wiadomo��: " << std::endl;
	std::cin >> message;
}*/