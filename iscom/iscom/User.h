#pragma once
#include <string>
class User
{
public:
	std::string id;
	std::string password;
	std::string description;

	std::string createGroup();
	std::string addFriend(std::string user_id);
	std::string removeFriend(std::string user_id);
	std::string updateDescription(std::string description);

	int login(std::string name, std::string password);
};


