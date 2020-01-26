#pragma once
#include <string>
class User
{
public:
	int id;
	std::string login;
	std::string password;
	std::string description;

	int createGroup();
	int addFriend(std::string user_id);
	int removeFriend(std::string user_id);
	int updateDescription(std::string description);

	int login(std::string name, std::string password);
};


