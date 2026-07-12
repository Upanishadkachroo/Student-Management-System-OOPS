#ifndef USERSERVICE_H
#define USERSERVICE_H

#include<bits/stdc++.h>
using namespace std;

#include "User.h"
#include "FriendRequest.h"
#include "PrivateChat.h"


class UserService{
    private:
    unordered_map<int, User*> users;

    public:
    UserService();

    ~UserService();

    bool addsser(User *user);

    bool removeuser(int userId);

    User* getuser(int userId);

    void showAllUsers();

    bool sendFriendRequest(int fromId, int toId);

    bool approveFriendRequest(int fromId, int toId);

    bool rejectFriendRequest(int fromId, int toId);
};

#endif