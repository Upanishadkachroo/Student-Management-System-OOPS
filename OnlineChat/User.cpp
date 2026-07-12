#include "User.h"

User::User(int id, const string &name, const string &password){
    userid=id;
    this->name=name;
    passwordhash=password;
}

int User::getuserid() const{
    return userid;
}

string User::getname() const{
    return name;
}

void User::addFriend(User *user){
    friends[user->getuserid()]=user;
}

void User::removeFriend(int friendid){
    friends.erase(friendid);
}

bool User::isfriend (int friendid) const{
    return friends.find(friendid) != friends.end();
} 

void User::showfriend() const
{
    cout << "Friend List"<<endl;

    for(const auto &entry : friends)
    {
        cout << entry.second->getuserid() << " : " << entry.second->getname() << endl;
    }
}
