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

	Test test = new Test;

	//testy dla metod z klasy Admin

	if (!test.testAddMod()) {
		std::cout << test.testAddMod() << std::endl;
	}
	if (!test.testRemoveMod()) {
		std::cout << test.testRemoveMod() << std::endl;
	}

	//testy dla metod z klasy Handler

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

	if (!test.testGetMessageByDate()) {
		std::cout << test.testGetMessageByDate() << std::endl;
	}
	if (!test.testAddMessage()) {
		std::cout << test.testAddMessage() << std::endl;
	}
	if (!test.testRemoveMessage()) {
		std::cout << test.testRemoveMessage() << std::endl;
	}

	//testy dla metod z klasy Mod

	if (!test.testChangeGroupName()) {
		std::cout << test.testChangeGroupName() << std::endl;
	}
	if (!test.testAddUser()) {
		std::cout << test.testAddUser() << std::endl;
	}
	if (!test.testModRemoveUser()) {
		std::cout << test.testModRemoveUser() << std::endl;
	}

	//testy dla metod z klasy User

	if (!test.testCreateGroup()) {
		std::cout << test.testCreateGroup() << std::endl;
	}
	if (!test.testAddFriend()) {
		std::cout << test.testAddFriend() << std::endl;
	}
	if (!test.testRemoveFriend()) {
		std::cout << test.testRemoveFriend() << std::endl;
	}
	if (!test.testActualiseDescription()) {
		std::cout << test.testActualiseDescription() << std::endl;
	}
	if (!test.testActualiseProfilPicture()) {
		std::cout << test.testActualiseProfilPicture() << std::endl;
	}

	//testy dla metod z klasy UserHandler

	if (!test.testGetUser()) {
		std::cout << test.testGetUser() << std::endl;
	}
	if (!test.testHandlerRemoveUser()) {
		std::cout << test.testHandlerRemoveUser() << std::endl;
	}
	if (!test.testUpdateUser()) {
		std::cout << test.testUpdateUser() << std::endl;
	}
}

int main()
{
	bool test = false;

	if (test) {
		tests();
	}


    std::string login;
  
    std::cout << "Witaj w IsCom!\n";
    std::cout << "Podaj login:\n";
    std::cin >> login;

    std::cout << "Podaj haslo:\n";
    SetStdinEcho(false);

    std::string password;
    std::cin >> password;

    SetStdinEcho(true);

    return 0;

}

