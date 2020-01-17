
#pragma once
#include "Test.h"

//metody dla klasy Admin

bool testAddMod() {
	if (Admin::addMod(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

bool testRemoveMod() {
	if (Admin::removeMod(value) == result) {
		return true;
	}
	else {
		return false;
	}
}


//metody dla klasy MessageHandler

bool testGetMessageByDate() {
	if (MessageHandler::getMessageByDate(value,value1) == result) {
		return true;
	}
	else {
		return false;
	}
}

bool testAddMessage() {
	if (MessageHandler::addMessage(value,value1,value_tab) == result) {
		return true;
	}
	else {
		return false;
	}
}

bool testRemoveMessage() {
	if (MessageHandler::Message(value) == result) {
		return true;
	}
	else {
		return false;
	}
}


//metody dla klasy Mod

bool testChangeGroupName() {
	if (Mod::changeGroupName(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

bool testAddUser() {
	if (Mod::addUser(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

bool testModRemoveUser() {
	if (Mod::removeUser(value) == result) {
		return true;
	}
	else {
		return false;
	}
}


//metody dla klasy User

bool testCreateGroup() {
	if (User::createGroup(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

bool testAddFriend() {
	if (User::addFriend(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

bool testRemoveFriend() {
	if (User::removeFriend(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

bool testActualiseDescription() {
	if (User::actualiseDescription(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

bool testActualiseProfilPicture() {
	if (User::actualiseProfilPicture(value) == result) {
		return true;
	}
	else {
		return false;
	}
}


//metody dla klasy UserHandler

bool testGetUser() {
	if (UserHandler::getUser(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

bool testHandlerRemoveUser() {
	if (UserHandler::removeUser(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

bool testUpdateUser() {
	if (UserHandler::updateUser(value) == result) {
		return true;
	}
	else {
		return false;
	}
}


//metody dla klasy Handler

bool testGet() {
	if (Handler::get(value, value1) == result) {
		return true;
	}
	else {
		return false;
	}
}

bool testAdd() {
	if (Handler::add(value, value1, value_tab) == result) {
		return true;
	}
	else {
		return false;
	}
}

bool testRemove() {
	if (Handler::remove(value) == result) {
		return true;
	}
	else {
		return false;
	}
}