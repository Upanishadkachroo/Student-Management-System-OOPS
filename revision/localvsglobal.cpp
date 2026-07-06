#include<bits/stdc++.h>
using namespace std;

int x=2;//global variable

void func(){
    int x=60;
    cout<<x<<endl;
    cout<<::x<<endl;
}

int main(){

    int x=80; //local to main fun()
    cout<<x<<endl; //prints the local variable to the scope
    cout<<::x<<endl; //uses global variable

    {
        int x=50;
        {
            int x=4;
            cout<<x<<endl;
            cout<<::x<<endl;
        }
    }

    func();
}