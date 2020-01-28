// iscom.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
#ifdef WIN32
#include <windows.h>
#else
#include <termios.h>
#include <unistd.h>
#endif
#include "Core.h"
#include "Test.h"
#include "nlohmann/json.hpp"
int CURRENT_USER = -1;

void SetStdinEcho(bool enable = true)
{
#ifdef WIN32
    HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
    DWORD mode;
    GetConsoleMode(hStdin, &mode);

    if (!enable)
        mode &= ~ENABLE_ECHO_INPUT;
    else
        mode |= ENABLE_ECHO_INPUT;

    SetConsoleMode(hStdin, mode);

#else
    struct termios tty;
    tcgetattr(STDIN_FILENO, &tty);
    if (!enable)
        tty.c_lflag &= ~ECHO;
    else
        tty.c_lflag |= ECHO;

    (void)tcsetattr(STDIN_FILENO, TCSANOW, &tty);
#endif
}



void tests() {

	Test test;

	//testy dla metod z klasy Admin

	if (test.testAddMod() != "OK") {
		std::cout << "addMod test:" << std::endl;
		std::cout << test.testAddMod() << std::endl;
	}
	if (test.testRemoveMod() != "OK") {
		std::cout << "removeMod test:" << std::endl;

		std::cout << test.testRemoveMod() << std::endl;
	}

	
	//testy dla metod z klasy Mod

	if (test.testChangeGroupName() != "OK") {
		std::cout << "changeGroupName test:" << std::endl;

		std::cout << test.testChangeGroupName() << std::endl;
	}
	if (test.testAddUser() != "OK") {
		std::cout << "addUser test:" << std::endl;

		std::cout << test.testAddUser() << std::endl;
	}
	if (test.testModRemoveUser() != "OK") {
		std::cout << "removeUser test:" << std::endl;

		std::cout << test.testModRemoveUser() << std::endl;
	}

	//testy dla metod z klasy User

	if (test.testCreateGroup() != "OK") {
		std::cout << "createGropu test:" << std::endl;

		std::cout << test.testCreateGroup() << std::endl;
	}
	if (test.testUpdateDescription() != "OK") {
		std::cout << "updateDescr test:" << std::endl;

		std::cout << test.testUpdateDescription() << std::endl;
	}
	
	//testy dla metod z klas Handler

	if (test.testGetUser() != "OK") {
		std::cout << "getUser test:" << std::endl;

		std::cout << test.testGetUser() << std::endl;
	}
	if (test.testGetGroup() != "OK") {
		std::cout << "getGropu test:" << std::endl;

		std::cout << test.testGetGroup() << std::endl;
	}
	if (test.testGetMessage() != "OK") {
		std::cout << "getMessage test:" << std::endl;

		std::cout << test.testGetMessage() << std::endl;
	}
	
}

int main()
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, 15);


	bool test = false;

	if (test) {
		tests();
	}


    std::string login;
	std::string password;
	User u = User();

	std::cout << "Witaj w IsCom!\n";

	while (CURRENT_USER == -1) {

		
		std::cout << "Podaj login:\n";
		std::cin >> login;
		std::cout << "Podaj haslo:\n";
		
		SetStdinEcho(false);
		std::cin >> password;
		SetStdinEcho(true);

		u.login(login, password);
		if (CURRENT_USER == -1) {
			std::cout << "Niepoprawny login i haslo, sprobuj jeszcze raz \n";
		}
		else {
			std::cout << "Zalogowano poprawnie, Czesc " << login << "!" << std::endl;
		}
	}
	
	ViewHandler vh;
	vh.displayUser(CURRENT_USER);
    return 0;

}

