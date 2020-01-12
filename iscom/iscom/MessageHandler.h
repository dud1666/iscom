#pragma once
#include "Handler.h"
#include <string>
#include "Date.h"
#include "Picture.h"
#include "Message.h"

class MessageHandler : public Handler
{
	Message getMessageByDate(Date data_start, Date data_end);
	long addMessage(std::string message, std::string group_id, Picture pictures[]);
	bool removeMessage(std::string id);

};

