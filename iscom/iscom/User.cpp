#include "User.h"
#include "UserHandler.h"
#include "nlohmann/json.hpp"
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
		if ((name == u["name"].get<std::string>()) && (password == u["password"].get<std::string>()))
		{
			CURRENT_USER = std::stoi(el.key());
			return CURRENT_USER;
		}
		
	}
	return -1;

}
User::User()
{
}
User::User(int id)
{
	this->id = id;
	UserHandler uh;
	nlohmann::json a = uh.get(id);
	name = a["name"].get<std::string>();
	password = a["password"].get<std::string>();
	description = a["description"].get<std::string>();
}
;