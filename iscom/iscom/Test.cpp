#pragma once
#include "Test.h"

//metody dla klasy Admin

 std::string Test::testAddMod(){
	int value = 0;
	int expected = 0;
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
	 int value = 0;
	 int expected = 0;
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
	 Date value1= Date();
	 std::string expected = std::string();

	 std::string result = testMessageHandler.getMessagesByDate(value, value1);
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
	 std::string expected = std::string();

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
	 std::string result = testMod.removeUserFromGroup(value, value1);
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
	 int expected = 0;
	 int result = testUser.createGroup();
	if (expected == result) {
		return "OK";
	}else {
		return result;
	}
}

 std::string Test::testAddFriend() {
	 User testUser;
	 int value = 0;
	 int expected = 0;
	 int result = testUser.addFriend(value);
	if (expected == result) {
		return "OK";
	}
	else {
		return result;
	}
}

 std::string Test::testRemoveFriend() {
	 User testUser;
	 int value = 0;
	 int expected = 0;
	 int result = testUser.removeFriend(value);
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
	 std::string result = testUser.updateDescription(value);
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
	 int value = 1;
	 std::string expected = std::string();
	 std::string result = testUserHandler.get(value);
	if (expected == result) {
		return "OK";
	}
	else {
		return result;
	}
}

 std::string Test::testHandlerRemoveUser() {
	 UserHandler testUserHandler;
	 int value = 1;
	 int expected = 1;
	 int result = testUserHandler.remove(value);
	if (expected == result) {
		return "ok";
	}
	else {
		return std::to_string(result);
	}
}

 std::string Test::testUpdateUser() {
	 UserHandler testUserHandler;
	 int id = 1;
	 nlohmann::json value;
	 int expected = 1;
	 int result = testUserHandler.update(id, value);
	if (expected == result) {
		return "OK";
	}
	else {
		return std::to_string(result);
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