#pragma once
#include <string>
#include "Group.h"
class User
{

	std::string id;
	std::string login;
	std::string password;
	std::string description;


	Group createGroup();
	User addFriend(std::string user_id);
	User removeFriend(std::string user_id);
	bool actualiseDescription(std::string description);


};

