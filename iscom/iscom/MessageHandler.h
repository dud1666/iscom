#pragma once
#include "Handler.h"
#include <string>
#include "Date.h"
#include "Message.h"

class MessageHandler : public Handler
{
	Message getMessageByDate(Date data_start, Date data_end);
	long addMessage(std::string message, std::string group_id);
	bool removeMessage(std::string id);

};

