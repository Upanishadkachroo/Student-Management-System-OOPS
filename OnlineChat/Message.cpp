#include<bits/stdc++.h>
using namespace std;
#include "Message.h"

Message::Message(){
    messageid=0;
    senderid=0;//for default constructor
}

Message::Message(int messageid, int senderid, const string &text, const string &timestamp){
    //paramterized constructor
    this->messageid=messageid;
    this->senderid=senderid;
    this->text=text;
    this->timestamp=timestamp;
}

int Message::getmessageid() const{
    return messageid;
}

int Message::getsenderid() const{
    return senderid;
}

string Message::gettext() const{
    return text;
}

string Message::gettimestamp() const{
    return timestamp;
}

void Message::display() const{
    cout << "[" << timestamp << "] ";
    cout << "User " << senderid << " : ";
    cout << text << endl;
}

