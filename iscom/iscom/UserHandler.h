#pragma once
#include "Handler.h"
#include "User.h"

class UserHandler : public Handler
{
public:
	std::string filename = "file/user.json";
	
	std::fstream file;

	nlohmann::json get(int id);
	nlohmann::json get();
	int add(nlohmann::json values);
	int update(int id, nlohmann::json values);
	int update_field(int id, std::string field, std::string value);
	int update_field(int id, std::string field, std::vector<int> value);

	int remove(int id);

	UserHandler();
};

