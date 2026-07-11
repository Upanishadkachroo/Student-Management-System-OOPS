#include "Chat.h"
#include <iostream>

Chat::Chat(int id)
{
    chatid = id;
}

Chat::~Chat()
{
    
}

int Chat::getchatid() const
{
    return chatid;
}

void Chat::addmessage(const Message &msg)
{
    message.push_back(msg);
}

void Chat::showMessage() const
{
    for(const auto &msg : message)
    {
        msg.display();
    }
}

vector<int> Chat::getparticipants() const
{
    return participants;
}