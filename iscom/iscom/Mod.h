#pragma once
#include "User.h"
#include <string>
class Mod :
	public User
{
public:
	int changeGroupName(std::string groupName, int groupId);
	User addUser(int id_user, int groupId);
	User removeUserFromGroup(int id_user, int groupId);

};

