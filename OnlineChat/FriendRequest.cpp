#include "FriendRequest.h"

FriendRequest::FriendRequest(){
    fromuserid=0;
    touserid=0;
    status=RequestStatus::unread;
}

FriendRequest::FriendRequest(int formuserid, int touserid, const string &timestamp){
    this->fromuserid=fromuserid;
    this->touserid=touserid;
    this->timestamp=timestamp;

    status=RequestStatus::unread;
}

int FriendRequest::getfromuser() const{
    return touserid;
}

int FriendRequest::gettouser() const{
    return touserid;
}

RequestStatus FriendRequest::getstatus() const{
    return status;
}

string FriendRequest::gettimestamp() const{
    return timestamp;
}

void FriendRequest::markasread(){
    if(status == RequestStatus::unread){
        status=RequestStatus::read;
    }
}

void FriendRequest::accept(){
    status=RequestStatus::accepted;
}

void FriendRequest::reject(){
    status=RequestStatus::rejected;
}

void FriendRequest::display() const
{
    cout << "From User : " << fromuserid << endl;
    cout << "To User   : " << touserid << endl;
    cout << "Time      : " << timestamp << endl;

    cout << "Status    : ";

    switch(status)
    {
        case RequestStatus::unread:
            cout << "UNREAD";
            break;

        case RequestStatus::read:
            cout << "READ";
            break;

        case RequestStatus::accepted:
            cout << "ACCEPTED";
            break;

        case RequestStatus::rejected:
            cout << "REJECTED";
            break;
    }

    cout << endl;
}