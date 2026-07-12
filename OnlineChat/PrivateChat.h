#ifndef PRIVATECHAT_H
#define PRIVATECHAT_H

#include "Chat.h"

class PrivateChat : public Chat{
    public:
    PrivateChat(int chatid, int user1, int user2);

    void adduser(int userid) override;

    void removeuser(int userid) override;
};

#endif