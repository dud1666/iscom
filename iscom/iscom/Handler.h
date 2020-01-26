#pragma once
#include "nlohmann/json.hpp"
#include <map>
#include <fstream>

class Handler
{
public:
	std::string filename;
	std::fstream file;

	nlohmann::json get(int id);
	nlohmann::json get();
	int add(nlohmann::json values);
	int update(int id, nlohmann::json values);
	int update_field(int id, std::string field, std::string value);
	int update_field(int id, std::string field, std::vector<int> value);

	int remove(int id);
	Handler();
};

