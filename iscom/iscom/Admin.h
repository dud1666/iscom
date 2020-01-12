#pragma once
#include "Mod.h"
#include <string>

class Admin :
	public Mod
{
	User addMod(std::string mod_id);
	User removeMod(std::string mod_id);
};

