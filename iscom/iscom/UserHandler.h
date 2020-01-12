#pragma once
#include "Handler.h"
#include "User.h"

class UserHandler : public Handler
{

	User getUser(std::string id);
	std::string removeUser(std::string id);
	User updateUser(std::string id);

};

