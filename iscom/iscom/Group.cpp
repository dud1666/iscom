#include "Group.h"
#include "GroupHandler.h"
#include "nlohmann/json.hpp"
#include <vector>
extern int CURRENT_USER;

int Group::saveGroup()
{
	GroupHandler gh;
	gh.update_field(id, "name", name);
	gh.update_field(id, "admin_id", admin_id);
	gh.update_field(id, "mod_id", mod_id);

	return id;
}
Group::Group(int id) {
	this->id = id;
	GroupHandler gh;
	nlohmann::json a = gh.get(id);
	name = a["name"].get<std::string>();
	admin_id = a["admin_id"].get<std::vector<int>>();
	mod_id = a["mod_id"].get<std::vector<int>>();
	user_id = a["user_id"].get<std::vector<int>>();

}
Group::Group(std::string name) {
	this->name = name;
	GroupHandler gh;
	nlohmann::json a;
	std::vector<int> current_user;
	current_user.push_back(CURRENT_USER);
	a["name"] = name;
	a["admin_id"] = current_user;
	a["mod_id"] = current_user;

	gh.add(a);

}
