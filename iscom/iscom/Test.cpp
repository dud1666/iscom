#pragma once
#include "Test.h"

//metody dla klasy Admin

 std::string Test::testAddMod(){
	std::string value = "0";
	std::string expected = "0";
	Admin testAdmin;

	std::string result = testAdmin.addMod(value);
	if (expected == result) {
		return "OK";
	}
	else {
		return result;
	}
}

 std::string Test::testRemoveMod() {
	 std::string value = "0";
	 std::string expected = "0";
	 Admin testAdmin;

	 std::string result = testAdmin.removeMod(value);
	if (expected == result) {
		return "OK";
	}
	else {
		return result;
	}
}


//metody dla klasy MessageHandler

 std::string Test::testGetMessageByDate() {
	 MessageHandler testMessageHandler;
	 Date value = Date();
	 Date value1 = Date();
	 std::string expected = std::string();

	 std::string result = testMessageHandler.getMessageByDate(value, value1);
	if (expected == result) {
		return "OK";
	}
	else {
		return result;
	}
}

 std::string Test::testAddMessage() {
	 MessageHandler testMessageHandler;
	 std::string value = std::string();
	 std::string value1 = std::string();
	 std::string expected = 0;

	 std::string result = testMessageHandler.addMessage(value, value1);
	if (expected == result) {
		return "OK";
	}
	else {
		return result;
	}
}

 std::string Test::testRemoveMessage() {
	 MessageHandler testMessageHandler;
	 std::string value = std::string();
	 std::string expected = std::string();

	 std::string result = testMessageHandler.removeMessage(value);
	if (expected == result) {
		return "OK";
	}
	else {
		return result;
	}
}


//metody dla klasy Mod

 std::string Test::testChangeGroupName() {
	 Mod testMod;
	 std::string value = std::string();
	 std::string value1 = std::string();
	 std::string expected = std::string();

	 std::string result = testMod.changeGroupName(value, value1);
	if (expected == result) {
		return "OK";
	}
	else {
		return result;
	}
}

 std::string Test::testAddUser() {
	 Mod testMod;
	 std::string value = std::string();
	 std::string value1 = std::string();
	 std::string expected = std::string();

	 std::string result = testMod.addUser(value, value1);
	if (expected == result) {
		return "OK";
	}
	else {
		return result;
	}
}

 std::string Test::testModRemoveUser() {
	 Mod testMod;
	 std::string value = std::string();
	 std::string value1 = std::string();
	 std::string expected = std::string();
	 std::string result = testMod.removeUser(value, value1);
	if (expected == result) {
		return "OK";
	}
	else {
		return result;
	}
}


//metody dla klasy User

 std::string Test::testCreateGroup() {
	 User testUser;
	 std::string expected = std::string();
	 std::string result = testUser.createGroup();
	if (expected == result) {
		return "OK";
	}else {
		return result;
	}
}

 std::string Test::testAddFriend() {
	 User testUser;
	 std::string value = std::string();
	 std::string expected = std::string();
	 std::string result = testUser.addFriend(value);
	if (expected == result) {
		return "OK";
	}
	else {
		return result;
	}
}

 std::string Test::testRemoveFriend() {
	 User testUser;
	 std::string value = std::string();
	 std::string expected = std::string();
	 std::string result = testUser.removeFriend(value);
	if (expected == result) {
		return "OK";
	}
	else {
		return result;
	}
}

 std::string Test::testActualiseDescription() {
	 User testUser;
	 std::string value = std::string();
	 std::string expected = std::string();
	 std::string result = testUser.actualiseDescription(value);
	if (expected == result) {
		return "OK";
	}
	else {
		return result;
	}
}




//metody dla klasy UserHandler

 std::string Test::testGetUser() {
	 UserHandler testUserHandler;
	 std::string value = std::string();
	 std::string expected = std::string();
	 std::string result = testUserHandler.getUser(value);
	if (expected == result) {
		return "OK";
	}
	else {
		return result;
	}
}

 std::string Test::testHandlerRemoveUser() {
	 UserHandler testUserHandler;
	 std::string value = std::string();
	 std::string expected = std::string();
	 std::string result = testUserHandler.removeUser(value);
	if (expected == result) {
		return "OK";
	}
	else {
		return result;
	}
}

 std::string Test::testUpdateUser() {
	 UserHandler testUserHandler;
	 std::string value = std::string();
	 std::string expected = std::string();
	 std::string result = testUserHandler.updateUser(value);
	if (expected == result) {
		return "OK";
	}
	else {
		return result;
	}
}


//metody dla klasy Handler
 /*

 std::string Test::testGet() {
	if (Handler::get(value, value1) == result) {
		return "OK";
	}
	else {
		return result;
	}
}

 std::string Test::testAdd() {
	if (Handler::add(value, value1, value_tab) == result) {
		return "OK";
	}
	else {
		return result;
	}
}

 std::string Test::testRemove() {
	if (Handler::remove(value) == result) {
		return "OK";
	}
	else {
		return result;
	}
}
 */