#pragma once
#include "Mod.h"
#include <string>

class Admin :
	public Mod
{
public:
	std::string addMod(std::string mod_id) {};
	std::string removeMod(std::string mod_id) {};
};

