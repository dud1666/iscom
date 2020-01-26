#pragma once
#include <string>
#include "Date.h"

class Message
{
public:
	long message_id;
	std::string content;
	int group_id;
	int sender_id;
	Date date;

	int saveMessage();

};

