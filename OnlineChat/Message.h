#ifndef MESSAGE_H
#define MESSAGE_H

#include<bits/stdc++.h>
using namespace std;

class Message{
    private:
    int messageid;
    int senderid;
    
    string text;
    string timestamp;

    public:
    Message();

    Message(int messageid, int senderid, const string &text, const string &timestamp);

    //getter function to access private members
    int getmessageid() const;

    int getsenderid() const;

    string gettext() const;

    string gettimestamp() const;

    void display() const;
};

#endif