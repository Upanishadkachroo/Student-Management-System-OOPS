// we can access the private data members of a class
// indirectly using the public member functions of the class


#include<iostream>
using namespace std;

class Bankaccount{
    double balance;

    public:
    Bankaccount(double initialbalance){
        if(initialbalance>0){
            balance=initialbalance;
        }
        else{
            balance=0;
        }
    }

    //getter
    double getbalance(){
        return balance;
    }

    //setter
    void deposit(double amount){
        if(amount>0){
            balance+=amount;
            cout<<"Successfully deposited "<<amount<<endl;
        }
        else{
            cout<<"Deposit must be positive"<<endl;
        }
    }
};

int main(){
    Bankaccount account(500.00);

    cout<<"Current Balance is "<<account.getbalance()<<endl;

    account.deposit(100.00);

    cout<<"New Balance is "<<account.getbalance()<<endl;
}