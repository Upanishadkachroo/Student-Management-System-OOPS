#ifndef FRIENDREQUEST_H
#define FRIENDREQUEST_H

#include<bits/stdc++.h>
using namespace std;

enum class RequestStatus{
    unread, read, accepted, rejected
};

class FriendRequest{
    private:
    int fromuserid;
    int touserid;

    RequestStatus status;

    string timestamp;

    public:
    FriendRequest();

    FriendRequest(int formuserid, int touserid, const string &timestamp);

    int getfromuser() const;

    int gettouser() const;

    RequestStatus getstatus() const;

    string gettimestamp() const;

    void markasread();

    void accept();

    void reject();

    void display() const;
};

#endif