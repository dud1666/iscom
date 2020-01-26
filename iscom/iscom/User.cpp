#include "User.h"
#include "UserHandler.h"
#include "nlohmann/json.hpp"
#include <iostream>
extern int CURRENT_USER;
int User::createGroup()
{
	return 0;
}



int User::updateDescription(std::string description)
{
	return 0;
}

int User::login(std::string name, std::string password) {
	bool l = false;
	UserHandler uh;
	nlohmann::json ul = uh.get();
	for (auto& el : ul.items())
	{
		nlohmann::json u = el.value();
		std::cout << u << std::endl;
		if ((name == u["name"].get<std::string>()) && (password == u["password"].get<std::string>()))
		{
			CURRENT_USER = std::stoi(el.key());
			return CURRENT_USER;
		}
		
	}
	return -1;

};