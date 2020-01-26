#include "User.h"
#include "UserHandler.h"
#include "nlohmann/json.hpp"
extern int CURRENT_USER;
std::string User::createGroup()
{
	return std::string();
}

std::string User::addFriend(std::string user_id)
{
	return std::string();
}

std::string User::removeFriend(std::string user_id)
{
	return std::string();
}

std::string User::updateDescription(std::string description)
{
	return std::string();
}

int User::login(std::string name, std::string password) {
	bool l = false;
	UserHandler uh;
	nlohmann::json ul = uh.get();
	for (auto& el : ul.items())
	{
		nlohmann::json u = el.value();
		if ((name == u["name"].get<std::string>()) && (password == u["password"].get<std::string>()))
		{
			CURRENT_USER = std::stoi(el.key());
			return CURRENT_USER;
		}
		
	}
	return -1;

};