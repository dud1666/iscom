#pragma once
#include "Core.h"

class Test
{
public:
	//metody dla klasy Admin

	std::string testAddMod() ;
	std::string testRemoveMod() ;


	//metody dla klasy Mod

	 std::string testChangeGroupName() ;
	 std::string testAddUser() ;
	 std::string testModRemoveUser() ;


	//metody dla klasy User

	 std::string testCreateGroup() ;
	 std::string testUpdateDescription() ;


	//metody dla klas Handler

	 std::string testGetUser() ;
	 std::string testGetMessage();
	 std::string testGetGroup();
	 //std::string testHandlerRemoveUser() ;
	 //std::string testUpdateUser() ;


};
