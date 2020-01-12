#pragma once
#include <string>
#include "Date.h"

class Message
{
	std::string message_id;
	std::string content;
	std::string group_id;
	std::string sender_id;
	Date date;
	int number_of_message;

};

