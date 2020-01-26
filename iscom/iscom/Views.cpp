#include <iostream>
#include "Views.h"
#include "Core.h"
#include <vector>

std::vector<int> wektor1 = {0, 1, 2};

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
	std::cout << "1 - wyswietl grupy"<<std::endl;
	std::cout << "2 - ustawienia"<< std::endl;;
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
	for (std::vector<int>::size_type i = 0; i != wektor1.size(); i++)
	{
		std::cout << wektor1[i]<<std::endl;
	};
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