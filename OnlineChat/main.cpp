#include<bits/stdc++.h>
using namespace std;
#include "Message.h"
#include "FriendRequest.h"
#include "PrivateChat.h"
#include "GroupChat.h"

int main(){
    // Message m1(1, 101, "hellow everyone", "12:30 pm");
    // m1.display();

    // FriendRequest request(1, 2, "10:30 AM");

    // request.display();

    // cout << endl;

    // request.markasread();

    // request.display();

    // cout << endl;

    // request.accept();

    // request.display();

    PrivateChat privateChat(1,101,102);

    privateChat.adduser(103);

    GroupChat group(2);

    group.adduser(101);
    group.adduser(102);
    group.adduser(103);

    group.removeuser(102);

    return 0;

    return 0;
}