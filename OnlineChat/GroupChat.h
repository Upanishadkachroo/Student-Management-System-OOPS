#include "Chat.h"
#ifndef GROUPCHAT_H
#define GROUPCHAT_H

class GroupChat:public Chat{
    public:
    GroupChat(int chatid);

    void adduser(int userid) override;

    void removeuser(int userid) override;
};

#endif