#pragma once
#include "nlohmann/json.hpp"
#include <map>
#include <fstream>

class Handler
{
public:
	std::string filename = "dump";
	std::fstream file;

	nlohmann::json get(int id);
	nlohmann::json add(std::map<std::string, std::string> values);
	nlohmann::json update(int id, std::map<std::string, std::string> values);
	nlohmann::json remove(int id);
	Handler();
};

