#pragma once
#include "Core.h"

class Test
{
public:
	template <class T>
	T value;
	T value1;
	T value_tab;
	T result;

	//metody dla klasy Admin

	static bool testAddMod();
	static bool testRemoveMod();

	//metody dla klasy Handler

	static bool testGet();
	static bool testAdd();
	static bool testRemove();

	//metody dla klasy MessageHandler

	static bool testGetMessageByDate();
	static bool testAddMessage();
	static bool testRemoveMessage();


	//metody dla klasy Mod

	static bool testChangeGroupName();
	static bool testAddUser();
	static bool testModRemoveUser();


	//metody dla klasy User

	static bool testCreateGroup();
	static bool testAddFriend();
	static bool testRemoveFriend();
	static bool testActualiseDescription();
	static bool testActualiseProfilPicture();


	//metody dla klasy UserHandler
	static bool testGetUser();
	static bool testHandlerRemoveUser();
	static bool testUpdateUser();


};
