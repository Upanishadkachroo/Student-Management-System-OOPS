#ifndef USER_H
#define USER_H

#include<bits/stdc++.h>
using namespace std;

class PrivateChat;
class GroupChat;
class FriendRequest;

class User{
    private:
    int userid;
    string name;
    string passwordhash;

    unordered_map<int, User*> friends;

    unordered_map<int, GroupChat*> groupchat;

    unordered_map<int, PrivateChat*> Privatechat;

    unordered_map<int, FriendRequest*> sentrequest;

    unordered_map<int, FriendRequest*> receiverequest;

    public:
    User(int id, const string &name, const string &password);

    int getuserid() const;

    string getname() const;

    void addFriend(User* user);

    void removeFriend(int friendid);

    bool isfriend(int friendid) const;

    void showfriend() const;
};

#endif 