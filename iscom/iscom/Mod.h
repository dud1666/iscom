#pragma once
#include "User.h"
#include <string>
class Mod :
	public User
{
public:
	std::string changeGroupName(std::string groupName, std::string groupId);
	std::string addUser(std::string id_user, std::string groupId);
	std::string removeUser(std::string id_user, std::string groupId);

};

