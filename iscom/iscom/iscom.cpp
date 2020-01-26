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


/*
void tests() {

	Test test;

	//testy dla metod z klasy Admin

	if (test.testAddMod() != "OK") {
		std::cout << test.testAddMod() << std::endl;
	}
	if (test.testRemoveMod() != "OK") {
		std::cout << test.testRemoveMod() << std::endl;
	}

	//testy dla metod z klasy Handler
	/*
	if (!test.testGet()) {
		std::cout << test.testGet() << std::endl;
	}
	if (!test.testAdd()) {
		std::cout << test.testAdd() << std::endl;
	}
	if (!test.testRemove()) {
		std::cout << test.testRemove() << std::endl;
	}
	
	//testy dla metod z klasy MessageHandler

	if (test.testGetMessageByDate() != "OK") {
		std::cout << test.testGetMessageByDate() << std::endl;
	}
	if (test.testAddMessage() != "OK") {
		std::cout << test.testAddMessage() << std::endl;
	}
	if (test.testRemoveMessage() != "OK") {
		std::cout << test.testRemoveMessage() << std::endl;
	}

	//testy dla metod z klasy Mod

	if (test.testChangeGroupName() != "OK") {
		std::cout << test.testChangeGroupName() << std::endl;
	}
	if (test.testAddUser() != "OK") {
		std::cout << test.testAddUser() << std::endl;
	}
	if (test.testModRemoveUser() != "OK") {
		std::cout << test.testModRemoveUser() << std::endl;
	}

	//testy dla metod z klasy User

	if (test.testCreateGroup() != "OK") {
		std::cout << test.testCreateGroup() << std::endl;
	}
	if (test.testAddFriend() != "OK") {
		std::cout << test.testAddFriend() << std::endl;
	}
	if (test.testRemoveFriend() != "OK") {
		std::cout << test.testRemoveFriend() << std::endl;
	}
	if (test.testActualiseDescription() != "OK") {
		std::cout << test.testActualiseDescription() << std::endl;
	}
	
	//testy dla metod z klasy UserHandler

	if (test.testGetUser() != "OK") {
		std::cout << test.testGetUser() << std::endl;
	}
	if (test.testHandlerRemoveUser() != "OK") {
		std::cout << test.testHandlerRemoveUser() << std::endl;
	}
	if (test.testUpdateUser() != "OK") {
		std::cout << test.testUpdateUser() << std::endl;
	}
}
*/
int main()
{
	bool test = false;

	//if (test) {
	//	tests();
	//}


    std::string login;
  
    std::cout << "Witaj w IsCom!\n";
    std::cout << "Podaj login:\n";
    std::cin >> login;

    std::cout << "Podaj haslo:\n";
    SetStdinEcho(false);

    std::string password;
    std::cin >> password;

    SetStdinEcho(true);

	User u = User();
	UserHandler uh;
	nlohmann::json j = { {"name","admin"},{"password","admin1"} };
	
	uh.add(j);

	u.login(login, password);
	std::cout << CURRENT_USER;
	
    return 0;

}

