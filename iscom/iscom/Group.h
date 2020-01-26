#pragma once
#include <string>
#include <vector>


class Group
{	
public:
	int id;
	std::string name;
	std::vector<int> admin_id;
	std::vector<int> mod_id;
	std::vector<int> user_id;

	int saveGroup();
	Group(int id);
	Group(std::string name);

};

