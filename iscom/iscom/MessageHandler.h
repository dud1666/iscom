#pragma once
#include "Handler.h"
#include <string>
#include "Date.h"
#include "Message.h"

class MessageHandler : public Handler
{
public:
	std::string getMessageByDate(Date data_start, Date data_end);
	std::string addMessage(std::string message, std::string group_id);
	std::string removeMessage(std::string id);

};

