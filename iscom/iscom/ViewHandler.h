#pragma once

class ViewHandler {
public:
	void displayUser(int id);
	bool displayGroup(int id);
	bool displayAdmin(int id);
	bool displayMod(int id);
	bool displayMessage(int id);	

	ViewHandler();
};