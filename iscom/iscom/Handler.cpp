#include "Handler.h"
#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>
Handler::Handler() {
}

int Handler::add(nlohmann::json values) {

	
	file.open(filename, std::ios::in);
	if (file.is_open()) {
		nlohmann::json j;
		try
		{
			j = nlohmann::json::parse(file);
			file.close();
		}
		catch (nlohmann::json::parse_error & e)
		{
			// output exception information
			std::cout << "message: " << e.what() << '\n'
				<< "exception id: " << e.id << '\n'
				<< "byte position of error: " << e.byte << std::endl;
		}

		auto e = j.end();
		e--;
		int last =  std::stoi(e.key());
		last += 1;
		std::string last_str = std::to_string(last);
		std::cout << last_str;
		std::ofstream file(filename);
		file << j;
		file.close();
		return last;
	}
	return -1;
};

nlohmann::json Handler::get(int id) {
	
	file.open(filename, std::ios::in);
	
	nlohmann::json j;
	try
	{
		j = nlohmann::json::parse(file);
	}
	catch (nlohmann::json::parse_error & e)
	{
		// output exception information
		std::cout << "message: " << e.what() << '\n'
			<< "exception id: " << e.id << '\n'
			<< "byte position of error: " << e.byte << std::endl;
	}

	if (j.contains(std::to_string(id))) {
		file.close();
		return j[std::to_string(id)];
	}
	else {
		file.close();
		return "false";
	}

}

int Handler::update(int id, nlohmann::json values) {
	
	file.open(filename, std::ios::in );

	nlohmann::json j;

	try
	{
		j = nlohmann::json::parse(file);
		file.close();
	}
	catch (nlohmann::json::parse_error & e)
	{
		// output exception information
		std::cout << "message: " << e.what() << '\n'
			<< "exception id: " << e.id << '\n'
			<< "byte position of error: " << e.byte << std::endl;
	}

	if (j.contains(std::to_string(id))) {	
		j[std::to_string(id)].merge_patch(values);
		std::ofstream file(filename);
		file << j;
		file.close();
		return id;
	}
	else {
		file.close();
		return -1;
	}

}

int Handler::update_field(int id, std::string field, std::string value) {

	file.open(filename, std::ios::in);

	nlohmann::json j;

	try
	{
		j = nlohmann::json::parse(file);
		file.close();
	}
	catch (nlohmann::json::parse_error & e)
	{
		// output exception information
		std::cout << "message: " << e.what() << '\n'
			<< "exception id: " << e.id << '\n'
			<< "byte position of error: " << e.byte << std::endl;
	}

	if (j.contains(std::to_string(id))) {
		nlohmann::json o;
		o = j[std::to_string(id)];
		if (o.contains(field)) {
			o[field] = value;
		}
		else {
			return -1;
		}
		j[std::to_string(id)] = o;
		std::ofstream file(filename);
		file << j;
		file.close();
		return id;
	}
	else {
		file.close();
		return -1;
	}

}

int Handler::remove(int id) {
	file.open(filename, std::ios::in);

	nlohmann::json j;
	j = nlohmann::json::parse(file);
	file.close();

	if (j.contains(std::to_string(id))) {
		j.erase(std::to_string(id));
		std::ofstream file(filename);
		file << j;
		file.close();
		return id;
	}
	else {
		file.close();
		return -1;
	}
}