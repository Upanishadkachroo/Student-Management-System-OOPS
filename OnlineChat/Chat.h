#ifndef CHAT_H
#define CHAT_H

#include<bits/stdc++.h>
using namespace std;
#include "Message.h"

using namespace std;

class Chat{
    protected:
    int chatid;
    vector<int> participants;
    vector<Message> message;

    public:
    Chat(int id);

    virtual ~Chat();

    int getchatid() const;

    void showMessage() const;

    void addmessage(const Message &msg);

    vector<int> getparticipants() const;

    //[pure virtual]
    virtual void adduser(int userid)=0;

    virtual void removeuser(int userid)=0;  
};

#endif