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

	//testy dla metod z klasy Admin

	if (!Test::testAddMod()) {
		std::cout << Test::testAddMod() << std::endl;
	}
	if (!Test::testRemoveMod()) {
		std::cout << Test::testRemoveMod() << std::endl;
	}

	//testy dla metod z klasy Handler

	if (!Test::testGet()) {
		std::cout << Test::testGet() << std::endl;
	}
	if (!Test::testAdd()) {
		std::cout << Test::testAdd() << std::endl;
	}
	if (!Test::testRemove()) {
		std::cout << Test::testRemove() << std::endl;
	}

	//testy dla metod z klasy MessageHandler

	if (!Test::testGetMessageByDate()) {
		std::cout << Test::testGetMessageByDate() << std::endl;
	}
	if (!Test::testAddMessage()) {
		std::cout << Test::testAddMessage() << std::endl;
	}
	if (!Test::testRemoveMessage()) {
		std::cout << Test::testRemoveMessage() << std::endl;
	}

	//testy dla metod z klasy Mod

	if (!Test::testChangeGroupName()) {
		std::cout << Test::testChangeGroupName() << std::endl;
	}
	if (!Test::testAddUser()) {
		std::cout << Test::testAddUser() << std::endl;
	}
	if (!Test::testModRemoveUser()) {
		std::cout << Test::testModRemoveUser() << std::endl;
	}

	//testy dla metod z klasy User

	if (!Test::testCreateGroup()) {
		std::cout << Test::testCreateGroup() << std::endl;
	}
	if (!Test::testAddFriend()) {
		std::cout << Test::testAddFriend() << std::endl;
	}
	if (!Test::testRemoveFriend()) {
		std::cout << Test::testRemoveFriend() << std::endl;
	}
	if (!Test::testActualiseDescription()) {
		std::cout << Test::testActualiseDescription() << std::endl;
	}
	if (!Test::testActualiseProfilPicture()) {
		std::cout << Test::testActualiseProfilPicture() << std::endl;
	}

	//testy dla metod z klasy UserHandler

	if (!Test::testGetUser()) {
		std::cout << Test::testGetUser() << std::endl;
	}
	if (!Test::testHandlerRemoveUser()) {
		std::cout << Test::testHandlerRemoveUser() << std::endl;
	}
	if (!Test::testUpdateUser()) {
		std::cout << Test::testUpdateUser() << std::endl;
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

