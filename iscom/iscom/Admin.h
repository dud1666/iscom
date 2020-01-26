#pragma once
#include "Mod.h"
#include <string>

class Admin :
	public Mod
{
public:
	int addMod(std::string mod_id) ;
	int removeMod(std::string mod_id) ;
};

