#include <iostream>
#include "Views.h"
#include "Core.h"

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
	std::cout << "1 - wyœwietl grupy"<<std::endl;
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
	std::cout << "przegl¹dasz grupê: " << std::endl; //tutaj podanie nazwy otwartej grupy
	std::cout << "Ostatnio otwierana: " << std::endl; //data kiedy ostatnio grupa by³a przegl¹dana je¿eli przechowujemy
	std::cout << "Wiadomoœci: " << std::endl; //poni¿ej wyœwietlane wiadomoœci w danej grupie

	std::cout << "Napisz wiadomoœæ: " << std::endl;
	std::cin >> message;
}*/