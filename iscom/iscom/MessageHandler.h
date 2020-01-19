#pragma once
#include "Handler.h"
#include <string>
#include "Date.h"
#include "Message.h"

class MessageHandler : public Handler
{
	std::string filename = "file/message.json";
public:
	std::string getMessagesByDate(Date data_start, Date data_end);
	std::string addMessage(std::string message, std::string group_id);
	std::string removeMessage(std::string id);

};

