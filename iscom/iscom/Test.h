#pragma once
#include "Core.h"

class Test
{
public:
	//metody dla klasy Admin

	std::string testAddMod() ;
	std::string testRemoveMod() ;

	//metody dla klasy Handler
	/*
	 std::string testGet() ;
	 std::string testAdd() ;
	 std::string testRemove() ;
	 */
	//metody dla klasy MessageHandler

	 std::string testGetMessageByDate() ;
	 std::string testAddMessage() ;
	 std::string testRemoveMessage() ;


	//metody dla klasy Mod

	 std::string testChangeGroupName() ;
	 std::string testAddUser() ;
	 std::string testModRemoveUser() ;


	//metody dla klasy User

	 std::string testCreateGroup() ;
	 std::string testAddFriend() ;
	 std::string testRemoveFriend() ;
	 std::string testActualiseDescription() ;


	//metody dla klasy UserHandler
	 std::string testGetUser() ;
	 std::string testHandlerRemoveUser() ;
	 std::string testUpdateUser() ;


};
