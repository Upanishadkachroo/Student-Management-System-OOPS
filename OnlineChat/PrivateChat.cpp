#include<bits/stdc++.h>
using namespace std;

#include "PrivateChat.h"

PrivateChat::PrivateChat(int chatid, int user1, int user2): Chat(chatid){
    participants.push_back(user1);
    participants.push_back(user2);
}

void PrivateChat::adduser(int userid){
    cout<<"cannot add more user to private chat"<<endl;
}

void PrivateChat::removeuser(int userid){
    cout<<"cannot remove user from private chat"<<endl;
}