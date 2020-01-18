#include "Handler.h"
#include <fstream>
#include <iterator>
#include <algorithm>
Handler::Handler() {
}

nlohmann::json Handler::add(std::map<std::string, std::string> values) {
	
	file.open(filename, std::ios::in);
	
	nlohmann::json j;
	j = nlohmann::json::parse(file);
	file.close();

	j += values;
	
	file.open(filename, std::ios::trunc);
	file << j;
	file.close();
	return j;
};

nlohmann::json Handler::get(int id) {
	
	file.open(filename, std::ios::in);
	
	nlohmann::json j;
	j = nlohmann::json::parse(file);
	
	if (j[id]) {
		file.close();
		return j[id];
	}
	else {
		file.close();
		return "false";
	}

}

nlohmann::json Handler::update(int id, std::map<std::string, std::string> values) {
	
	file.open(filename, std::ios::in );

	nlohmann::json j;
	j = nlohmann::json::parse(file);
	file.close();

	if (j[id]) {
		std::map<std::string, std::string>::iterator it = values.begin();
		for (std::pair<std::string, std::string> element : values) {
			j[id][element.first] = element.second;
		}
		file.open(filename, std::ios::trunc);
		file << j;
		file.close();
		return j[id];
	}
	else {
		file.close();
		return "false";
	}

}

nlohmann::json Handler::remove(int id) {
	file.open(filename, std::ios::in);

	nlohmann::json j;
	j = nlohmann::json::parse(file);
	file.close();
	j.erase(id);
	file.open(filename, std::ios::trunc);
	file << j;
	file.close();
	return "removed";

}