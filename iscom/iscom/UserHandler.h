#pragma once
#include "Handler.h"
#include "User.h"

class UserHandler : public Handler
{
public:

	std::string getUser(std::string id);
	std::string removeUser(std::string id);
	std::string updateUser(std::string id);

};

