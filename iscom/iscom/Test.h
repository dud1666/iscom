#pragma once
#include "Core.h"
#include <string>
#include "Admin.h"
#include "MessageHandler.h"
#include "Message.h"
#include "Mod.h"
#include "Date.h"
#include "Group.h"
#include "User.h"
#include "UserHandler.h"



class Test
{
public:
	//metody dla klasy Admin

	 bool testAddMod();
	 bool testRemoveMod();

	//metody dla klasy Handler
	 /*
	 bool testGet();
	 bool testAdd();
	 bool testRemove();
	 */
	//metody dla klasy MessageHandler

	 bool testGetMessageByDate();
	 bool testAddMessage();
	 bool testRemoveMessage();


	//metody dla klasy Mod

	 bool testChangeGroupName();
	 bool testAddUser();
	 bool testModRemoveUser();


	//metody dla klasy User

	 bool testCreateGroup();
	 bool testAddFriend();
	 bool testRemoveFriend();
	 bool testActualiseDescription();


	//metody dla klasy UserHandler
	
	 bool testGetUser();
	 bool testHandlerRemoveUser();
	 bool testUpdateUser();
	 

};
