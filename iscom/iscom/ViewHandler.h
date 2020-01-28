#pragma once

class ViewHandler {
public:
	void displayUser(int id);
	void displayGroup(int id);
	void displayAdmin(int id);
	void displayMod(int id);
	void displayMessage(int id);	

	ViewHandler();
};