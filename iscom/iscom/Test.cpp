#pragma once
#include "Test.h"

//metody dla klasy Admin

 bool Test::testAddMod(){
	 int value = 0;
	 int result = 0;
	if (Admin::addMod(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

 bool Test::testRemoveMod() {
	 int value = 0;
	 int result = 0;
	if (Admin::removeMod(value) == result) {
		return true;
	}
	else {
		return false;
	}
}


//metody dla klasy MessageHandler

 bool Test::testGetMessageByDate() {
	 Date value = Date();
	 Date value1 = Date();
	 Message result = Message();
	if (MessageHandler::getMessageByDate(value,value1) == result) {
		return true;
	}
	else {
		return false;
	}
}

 bool Test::testAddMessage() {
	 std::string value = std::string();
	 std::string value1 = std::string();
	 long result = 0;
	if (MessageHandler::addMessage(value,value1) == result) {
		return true;
	}
	else {
		return false;
	}
}

 bool Test::testRemoveMessage() {
	 std::string value = std::string();
	 bool result = false;
	if (MessageHandler::Message(value) == result) {
		return true;
	}
	else {
		return false;
	}
}


//metody dla klasy Mod

 bool Test::testChangeGroupName() {
	 std::string value = std::string();
	 std::string value1 = std::string();
	 std::string result = std::string();
	if (Mod::changeGroupName(value,value1) == result) {
		return true;
	}
	else {
		return false;
	}
}

 bool Test::testAddUser() {
	 std::string value = std::string();
	 std::string value1 = std::string();
	 User result = User();
	if (Mod::addUser(value, value1) == result) {
		return true;
	}
	else {
		return false;
	}
}

 bool Test::testModRemoveUser() {
	 std::string value = std::string();
	 std::string value1 = std::string();
	 User result = User();
	if (Mod::removeUser(value, value1) == result) {
		return true;
	}
	else {
		return false;
	}
}


//metody dla klasy User

 bool Test::testCreateGroup() {
	 Group result = Group();
	if (User::createGroup() == result) {
		return true;
	}
	else {
		return false;
	}
}

 bool Test::testAddFriend() {
	 std::string value = std::string();
	 User result = User();
	if (User::addFriend(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

 bool Test::testRemoveFriend() {
	 std::string value = std::string();
	 User result = User();
	if (User::removeFriend(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

 bool Test::testActualiseDescription() {
	 std::string value = std::string();
	 bool result = false;
	if (User::actualiseDescription(value) == result) {
		return true;
	}
	else {
		return false;
	}
}




//metody dla klasy UserHandler

 bool Test::testGetUser() {
	 std::string value = std::string();
	 Uaer result = User();
	if (UserHandler::getUser(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

 bool Test::testHandlerRemoveUser() {
	 std::string value = std::string();
	 std::string result = std::string();
	if (UserHandler::removeUser(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

 bool Test::testUpdateUser() {
	 std::string value = std::string();
	 User result = User();
	if (UserHandler::updateUser(value) == result) {
		return true;
	}
	else {
		return false;
	}
}


//metody dla klasy Handler
 /*

 bool Test::testGet() {
	if (Handler::get(value, value1) == result) {
		return true;
	}
	else {
		return false;
	}
}

 bool Test::testAdd() {
	if (Handler::add(value, value1, value_tab) == result) {
		return true;
	}
	else {
		return false;
	}
}

 bool Test::testRemove() {
	if (Handler::remove(value) == result) {
		return true;
	}
	else {
		return false;
	}
}
 */