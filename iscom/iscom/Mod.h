#pragma once
#include "User.h"
#include <string>
class Mod :
	public User
{

	std::string changeGroupName(std::string groupName);
	User addUser(std::string id_user);
	User removeUser(std::string id_user);

};
