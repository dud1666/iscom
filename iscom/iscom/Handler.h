#pragma once
#include "nlohmann/json.hpp"
#include <map>
#include <fstream>

class Handler
{
public:
	std::string filename = "file/dump.json";
	std::fstream file;

	nlohmann::json get(int id);
	int add(nlohmann::json values);
	int update(int id, nlohmann::json values);
	int update_field(int id, std::string field, std::string value);
	int remove(int id);
	Handler();
};

