#include <iostream>
#include "Views.h"
#include "Core.h"
#include <vector>


std::vector<int> wektor1 = {0, 1, 2};

int group_name;
int password; //has�o u�ytkownika
int choice; //przechowuje wyb�r u�ytkownika w menu
std::string message; // wiadomosc u�ytkownika chocia� pewnie inaczej to rozwi��emy

void View::login()
{
	//jest zrobiony on ju�
	std::cout << "podaj haslo";
	std::cin >> password;
}

View::View()
{};


void View::dashboard()
{
	
	std::cout << "1 - wyswietl grupy"<<std::endl;
	std::cout << "2 - utworz grupe"<< std::endl;
	std::cin >> choice;

	switch (choice)
	{

	case 1:
		{
		groupList();
		}

	case 2:
		{
		addGroup();
		}


	}
}

void View::groupList()
{
	system("cls");
	for (std::vector<int>::size_type i = 0; i != wektor1.size(); i++)
	{
		std::cout << wektor1[i]<<std::endl;
	};
	std::cout << std::endl;
	dashboard();
}

void View::addGroup()
{
	system("cls");
	std::cout << "podaj nazwe jaka chcesz nadac nowej grupie" << std::endl;
	std::cin >> group_name;
	dashboard();
}



/*void View::singlegroup()
{
	std::cout << "przegl�dasz grup�: " << std::endl; //tutaj podanie nazwy otwartej grupy
	std::cout << "Ostatnio otwierana: " << std::endl; //data kiedy ostatnio grupa by�a przegl�dana je�eli przechowujemy
	std::cout << "Wiadomo�ci: " << std::endl; //poni�ej wy�wietlane wiadomo�ci w danej grupie

	std::cout << "Napisz wiadomo��: " << std::endl;
	std::cin >> message;
}*/