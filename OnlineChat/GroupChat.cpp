#include "GroupChat.h"
#include<bits/stdc++.h>

using namespace std;

GroupChat::GroupChat(int chatid): Chat(chatid){}

void GroupChat::adduser(int userid){
    participants.push_back(userid);

    cout<<"User "<<userid<<" added sucessfully"<<endl;
}

void GroupChat::removeuser(int userid){
    auto it=find(participants.begin(), participants.end(), userid);

    if(it!=participants.end()){
        participants.erase(it);

        cout<<"Userid "<<userid<<"removed successfully"<<endl;
    }
    else{
        cout<<"user not found"<<endl;
    }

}