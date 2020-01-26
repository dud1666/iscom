#pragma once
#include "Mod.h"
#include <string>

class Admin :
	public Mod
{
public:
	User addMod(int mod_id) ;
	User removeMod(int mod_id) ;
};

