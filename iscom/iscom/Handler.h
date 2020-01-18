#pragma once
#include "nlohmann/json.hpp"
#include <map>

class Handler
{
public:
	std::string file;
	nlohmann::json get(std::string id);
	nlohmann::json change(std::string id, std::map<std::string, std::string> values);
	nlohmann::json remove(std::string id);
	Handler();
};

