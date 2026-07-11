#include<bits/stdc++.h>
using namespace std;
#include "Message.h"
#include "FriendRequest.h"

int main(){
    Message m1(1, 101, "hellow everyone", "12:30 pm");
    m1.display();

    FriendRequest request(1, 2, "10:30 AM");

    request.display();

    cout << endl;

    request.markasread();

    request.display();

    cout << endl;

    request.accept();

    request.display();

    return 0;
}