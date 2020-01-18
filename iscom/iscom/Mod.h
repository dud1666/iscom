#pragma once
#include "User.h"
#include <string>
class Mod :
	public User
{

	std::string changeGroupName(std::string groupName, std::string groupId);
	User addUser(std::string id_user, std::string groupId);
	User removeUser(std::string id_user, std::string groupId);

};

