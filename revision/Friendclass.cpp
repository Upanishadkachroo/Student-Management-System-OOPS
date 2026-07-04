#include<bits/stdc++.h>
using namespace std;

class Vault{
    private:
    string secretpassword;

    public:
    Vault(string pass){
        secretpassword=pass;
    }

    friend class Trustee;
};

class Trustee{
    public:
    void revealsecret(Vault &v){
        cout<<"Trustee accessing Vault data -> "<<endl;
        cout<<"The secret password is "<<v.secretpassword<<endl;
    }

    void changesecret(Vault &v, string newpass){
        v.secretpassword=newpass;
        cout<<"Trustee succesfully the password i.e"<<endl;
    }
};

int main(){
    Vault myvault("secret1234");
    Trustee agent;

    agent.revealsecret(myvault);

    agent.changesecret(myvault, "newpassword1234");
    agent.revealsecret(myvault);
}
