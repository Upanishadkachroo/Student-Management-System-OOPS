#ifndef FRIENDREQUEST.H
#define FRIENDREQUEST.H

#include<bits/stdc++.h>
using namespace std;

enum class RequestStatus{
    unread, read, accepted, rejected
};

class FriendsRequest{
    private:
    int fromuserid;
    int touserid;

    RequestStatus status;

    string timestamp;

    public:
    FriendsRequest();

    FriendsRequest(int formuserid, int touserid, const string &timestamp);

    int getfromuser() const;

    int gettouser() const
}