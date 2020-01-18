#pragma once
#include "Test.h"

//metody dla klasy Admin

 std::string Test::testAddMod(){
	std::string value = "0";
	std::string expected = "0";
	Admin a;

	std::string result = a.addMod(value);
	if (a.addMod(value) == result) {
		return "OK";
	}
	else {
		return result;
	}
}

 std::string Test::testRemoveMod() {
	 std::string value = 0;
	 std::string result = 0;
	if (Admin::removeMod(value) == result) {
		return true;
	}
	else {
		return false;
	}
}


//metody dla klasy MessageHandler

 std::string Test::testGetMessageByDate() {
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

 std::string Test::testAddMessage() {
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

 std::string Test::testRemoveMessage() {
	 std::string value = std::string();
	 std::string result = false;
	if (MessageHandler::Message(value) == result) {
		return true;
	}
	else {
		return false;
	}
}


//metody dla klasy Mod

 std::string Test::testChangeGroupName() {
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

 std::string Test::testAddUser() {
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

 std::string Test::testModRemoveUser() {
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

 std::string Test::testCreateGroup() {
	 Group result = Group();
	if (User::createGroup() == result) {
		return true;
	}
	else {
		return false;
	}
}

 std::string Test::testAddFriend() {
	 std::string value = std::string();
	 User result = User();
	if (User::addFriend(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

 std::string Test::testRemoveFriend() {
	 std::string value = std::string();
	 User result = User();
	if (User::removeFriend(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

 std::string Test::testActualiseDescription() {
	 std::string value = std::string();
	 std::string result = false;
	if (User::actualiseDescription(value) == result) {
		return true;
	}
	else {
		return false;
	}
}




//metody dla klasy UserHandler

 std::string Test::testGetUser() {
	 std::string value = std::string();
	 Uaer result = User();
	if (UserHandler::getUser(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

 std::string Test::testHandlerRemoveUser() {
	 std::string value = std::string();
	 std::string result = std::string();
	if (UserHandler::removeUser(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

 std::string Test::testUpdateUser() {
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

 std::string Test::testGet() {
	if (Handler::get(value, value1) == result) {
		return true;
	}
	else {
		return false;
	}
}

 std::string Test::testAdd() {
	if (Handler::add(value, value1, value_tab) == result) {
		return true;
	}
	else {
		return false;
	}
}

 std::string Test::testRemove() {
	if (Handler::remove(value) == result) {
		return true;
	}
	else {
		return false;
	}
}
 */