#pragma once
#include <string>
#include "Group.h"
class User
{
public:
	std::string id;
	std::string login;
	std::string password;
	std::string description;

	std::string createGroup();
	std::string addFriend(std::string user_id);
	std::string removeFriend(std::string user_id);
	std::string actualiseDescription(std::string description);


};

