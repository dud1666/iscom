#pragma once
#include "Test.h"

//metody dla klasy Admin

 std::string Test::testAddMod(){
	int value = 0;
	int expected = 0;
	Admin testAdmin;

	User result = testAdmin.addMod(value);
	if (expected == result.id) {
		return "OK";
	}
	else {
		return std::to_string(result.id);
	}
}

 std::string Test::testRemoveMod() {
	 int value = 0;
	 int expected = 0;
	 Admin testAdmin;

	 User result = testAdmin.removeMod(value);
	if (expected == result.id) {
		return "OK";
	}
	else {
		return std::to_string(result.id);
	}
}

//metody dla klasy Mod

 std::string Test::testChangeGroupName() {
	 Mod testMod;
	 std::string value = std::string();
	 int value1 = 0;
	 int expected = 0;

	 int result = testMod.updateGroupName(value, value1);
	if (expected == result) {
		return "OK";
	}
	else {
		return std::to_string(result);
	}
}

 std::string Test::testAddUser() {
	 Mod testMod;
	 int value = 0;
	 int value1 = 0;
	 User expected = User();

	 User result = testMod.addUser(value, value1);
	if (expected.id == result.id) {
		return "OK";
	}
	else {
		return std::to_string(result.id);
	}
}

 std::string Test::testModRemoveUser() {
	 Mod testMod;
	 int value = 0;
	 int value1 = 0;
	 User expected = User();
	User result = testMod.removeUserFromGroup(value, value1);
	if (expected.id == result.id) {
		return "OK";
	}
	else {
		return std::to_string(result.id);
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
		return std::to_string(result);
	}
}


 std::string Test::testUpdateDescription() {
	 User testUser;
	 std::string value = std::string();
	 int expected = 0;
	 int result = testUser.updateDescription(value);
	if (expected == result) {
		return "OK";
	}
	else {
		return std::to_string(result);
	}
}



 std::string Test::testGetUser() {
	 int value = 0;
	UserHandler testUserHandler;
	std::string expected = "jakub";
	nlohmann::json result = testUserHandler.get(value);
	if (expected == result["name"].get<std::string>()) {
		return "OK";
	}
	else {
		return result["name"].get<std::string>();
	}
 }

 std::string Test::testGetMessage() {
	 int value = 0;
	 MessageHandler testMessageHandler;
	 std::string expected = "pierwsza wiadomosc elo";
	 nlohmann::json result = testMessageHandler.get(value);
	 if (expected == result["content"].get<std::string>()) {
		 return "OK";
	 }
	 else {
		 return  result["content"].get<std::string>();
	 }
 }

 std::string Test::testGetGroup() {
	 int value = 0;
	 GroupHandler testGroupHandler;
	 std::string expected = "Grupa dyskusyjna";
	 nlohmann::json result = testGroupHandler.get(value);
	 if (expected == result["name"].get<std::string>()) {
		 return "OK";
	 }
	 else {
		 return result["name"].get<std::string>();
	 }
 }


//metody dla klasy UserHandler
 /*
 std::string Test::testGetUser() {
	 UserHandler testUserHandler;
	 int value = 1;
	 int expected = 0;
	 std::string result = testUserHandler.get(value);
	if (expected == result) {
		return "OK";
	}
	else {
		return std::to_string(result);
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