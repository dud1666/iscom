#pragma once
#include <string>
class User
{
public:
	int id;
	std::string name;
	std::string password;
	std::string description;

	int createGroup();

	int updateDescription(std::string description);

	int login(std::string name, std::string password);
};


