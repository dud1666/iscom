#pragma once
#include "Test.h"
#include "Core.h"

//metody dla klasy Admin
int value = 0;
int result = 0;
bool Test::testAddMod(){
	Admin a;
	if (a.addMod(value) == result) {
		return true;
	}
	else {
		return false;	
	}
}

bool Test::testRemoveMod() {
	if (Admin::removeMod(value) == result) {
		return true;
	}
	else {
		return false;
	}
}


//metody dla klasy MessageHandler

 bool Test::testGetMessageByDate() {
	if (MessageHandler::getMessageByDate(value,value1) == result) {
		return true;
	}
	else {
		return false;
	}
}

 bool Test::testAddMessage() {
	if (MessageHandler::addMessage(value,value1,value_tab) == result) {
		return true;
	}
	else {
		return false;
	}
}

 bool Test::testRemoveMessage() {
	if (MessageHandler::Message(value) == result) {
		return true;
	}
	else {
		return false;
	}
}


//metody dla klasy Mod

 bool Test::testChangeGroupName() {
	if (Mod::changeGroupName(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

 bool Test::testAddUser() {
	if (Mod::addUser(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

 bool Test::testModRemoveUser() {
	if (Mod::removeUser(value) == result) {
		return true;
	}
	else {
		return false;
	}
}


//metody dla klasy User

 bool Test::testCreateGroup() {
	if (User::createGroup(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

 bool Test::testAddFriend() {
	if (User::addFriend(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

 bool Test::testRemoveFriend() {
	if (User::removeFriend(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

 bool Test::testActualiseDescription() {
	if (User::actualiseDescription(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

 bool Test::testActualiseProfilPicture() {
	if (User::actualiseProfilPicture(value) == result) {
		return true;
	}
	else {
		return false;
	}
}


//metody dla klasy UserHandler

 bool Test::testGetUser() {
	if (UserHandler::getUser(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

 bool Test::testHandlerRemoveUser() {
	if (UserHandler::removeUser(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

 bool Test::testUpdateUser() {
	if (UserHandler::updateUser(value) == result) {
		return true;
	}
	else {
		return false;
	}
}


//metody dla klasy Handler


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