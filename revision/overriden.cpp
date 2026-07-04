#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    virtual void speak(){
        cout<<"Hiii"<<endl;
    }
};

class Dog : public Animal{
    public:
    void speak(){
        cout<<"woof"<<endl;
    }
};

int main(){
    Dog d;
    d.speak();

    Animal a;
    a.speak();

    Animal *ptr=new Dog();
    ptr->speak();

    delete ptr;
}