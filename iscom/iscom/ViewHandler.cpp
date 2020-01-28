
#include "ViewHandler.h"
#include <windows.h>
#include "Core.h"
#include <iostream>
#include <cstdlib>
void ViewHandler::displayUser(int id)
{
	UserHandler uh;
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	//std::cout << id << std::endl;
	std::cout << std::endl;
	SetConsoleTextAttribute(hOut, 9);
	std::cout << uh.get(id)["name"].get<std::string>() << std::endl;
	SetConsoleTextAttribute(hOut, 6);
	std::cout << uh.get(id)["description"].get<std::string>() << std::endl;
	std::cout << std::endl;
	SetConsoleTextAttribute(hOut, 15);
}

void ViewHandler::displayGroup(int id)
{
	Group grupa(id);

	HANDLE hOut;
	UserHandler uh;

	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, 3);
	std::cout << grupa.name << std::endl;

	
	

	SetConsoleTextAttribute(hOut, 15);
	std::cout << "Admini: ";
	
	for (int i = 0; i < grupa.admin_id.size(); i++) {
		SetConsoleTextAttribute(hOut, 14);
		std::cout << uh.get(grupa.mod_id[i])["name"].get<std::string>();
		SetConsoleTextAttribute(hOut, 15);
		std::cout << ", ";
	}
	std::cout << std::endl;
	SetConsoleTextAttribute(hOut, 15);
	std::cout << "Moderatorzy: ";
	
	for (int i = 0; i < grupa.mod_id.size(); i++) {
		SetConsoleTextAttribute(hOut, 14);
		std::cout << uh.get(grupa.mod_id[i])["name"].get<std::string>();
		SetConsoleTextAttribute(hOut, 15);
		std::cout << ", ";
	}
	std::cout << std::endl;
	SetConsoleTextAttribute(hOut, 15);

	std::cout << "Uzytkownicy: ";
	
	for (int i = 0; i < grupa.user_id.size(); i++) {
		SetConsoleTextAttribute(hOut, 14);
		std::cout << uh.get(grupa.user_id[i])["name"].get<std::string>();
		SetConsoleTextAttribute(hOut, 15);
		std::cout << ", ";
	}
	std::cout << std::endl;
	
}

void ViewHandler::displayAdmin(int id)
{
	UserHandler uh;
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	//std::cout << id << std::endl;
	std::cout << std::endl;
	SetConsoleTextAttribute(hOut, 15);
	std::cout << "Admin: ";
	SetConsoleTextAttribute(hOut, 13);
	std::cout << uh.get(id)["name"].get<std::string>() << std::endl;
	SetConsoleTextAttribute(hOut, 15);
	std::cout << uh.get(id)["description"].get<std::string>() << std::endl;
	std::cout << std::endl;
}

void ViewHandler::displayMod(int id)
{
	UserHandler uh;
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	//std::cout << id << std::endl;
	std::cout << std::endl; 
	SetConsoleTextAttribute(hOut, 15);
	std::cout << "Mod: ";
	SetConsoleTextAttribute(hOut, 11);
	std::cout << uh.get(id)["name"].get<std::string>() << std::endl;
	SetConsoleTextAttribute(hOut, 15);
	std::cout << uh.get(id)["description"].get<std::string>() << std::endl;
	std::cout << std::endl;
}

void ViewHandler::displayMessage(int id)
{
	
	MessageHandler mh;
	UserHandler uh;
	GroupHandler gh;
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	//Group grupa(mh.get(id)["group"]);

	std::cout << std::endl;
	SetConsoleTextAttribute(hOut, 15);
	std::cout << mh.get(id)["date"].get<std::string>() << " ";
	SetConsoleTextAttribute(hOut, 9);
	std::cout << uh.get(mh.get(id)["sender_id"])["name"].get<std::string>() << " ";// << " > ";
	SetConsoleTextAttribute(hOut, 15);
	//std::cout << grupa.name << " ";
	std::cout << mh.get(id)["content"].get<std::string>() << " " << std::endl;
	SetConsoleTextAttribute(hOut, 15);
}

ViewHandler::ViewHandler()
{
}
