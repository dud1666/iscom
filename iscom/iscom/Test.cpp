#pragma once
#include "Test.h"

//metody dla klasy Admin

static bool Test::testAddMod(){
	if (Admin::addMod(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

static bool Test::testRemoveMod() {
	if (Admin::removeMod(value) == result) {
		return true;
	}
	else {
		return false;
	}
}


//metody dla klasy MessageHandler

static bool Test::testGetMessageByDate() {
	if (MessageHandler::getMessageByDate(value,value1) == result) {
		return true;
	}
	else {
		return false;
	}
}

static bool Test::testAddMessage() {
	if (MessageHandler::addMessage(value,value1,value_tab) == result) {
		return true;
	}
	else {
		return false;
	}
}

static bool Test::testRemoveMessage() {
	if (MessageHandler::Message(value) == result) {
		return true;
	}
	else {
		return false;
	}
}


//metody dla klasy Mod

static bool Test::testChangeGroupName() {
	if (Mod::changeGroupName(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

static bool Test::testAddUser() {
	if (Mod::addUser(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

static bool Test::testModRemoveUser() {
	if (Mod::removeUser(value) == result) {
		return true;
	}
	else {
		return false;
	}
}


//metody dla klasy User

static bool Test::testCreateGroup() {
	if (User::createGroup(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

static bool Test::testAddFriend() {
	if (User::addFriend(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

static bool Test::testRemoveFriend() {
	if (User::removeFriend(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

static bool Test::testActualiseDescription() {
	if (User::actualiseDescription(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

static bool Test::testActualiseProfilPicture() {
	if (User::actualiseProfilPicture(value) == result) {
		return true;
	}
	else {
		return false;
	}
}


//metody dla klasy UserHandler

static bool Test::testGetUser() {
	if (UserHandler::getUser(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

static bool Test::testHandlerRemoveUser() {
	if (UserHandler::removeUser(value) == result) {
		return true;
	}
	else {
		return false;
	}
}

static bool Test::testUpdateUser() {
	if (UserHandler::updateUser(value) == result) {
		return true;
	}
	else {
		return false;
	}
}


//metody dla klasy Handler


static bool Test::testGet() {
	if (Handler::get(value, value1) == result) {
		return true;
	}
	else {
		return false;
	}
}

static bool Test::testAdd() {
	if (Handler::add(value, value1, value_tab) == result) {
		return true;
	}
	else {
		return false;
	}
}

static bool Test::testRemove() {
	if (Handler::remove(value) == result) {
		return true;
	}
	else {
		return false;
	}
}