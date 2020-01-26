
#include "ViewHandler.h"
#include "Core.h"
#include <iostream>
void ViewHandler::displayUser(int id)
{
	UserHandler uh;
	//std::cout << uh.get(id) << std::endl;
}

bool ViewHandler::displayGroup(int id)
{
	return false;
}

bool ViewHandler::displayAdmin(int id)
{
	return false;
}

bool ViewHandler::displayMod(int id)
{
	return false;
}

bool ViewHandler::displayMessage(int id)
{
	return false;
}

ViewHandler::ViewHandler()
{
}
