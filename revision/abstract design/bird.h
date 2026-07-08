#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>

class Bird{
    public:
    //has become interface
    virtual void eat()=0;
    virtual void fly()=0; //pure virtual function
    //classes that inherits this class has to imlemt pure virtual function
};

class sparrow: public Bird{
    private:
    void eat(){
        std::cout<<"sparrow is eating"<<std::endl;
    }
    void fly(){
        std::cout<<"sparrow is flying"<<std::endl;
    }
};

class eagle: public Bird{
    private:
    void eat(){
        std::cout<<"eagle is eating"<<std::endl;
    }
    void fly(){
        std::cout<<"eagle is flying"<<std::endl;
    }
};

#endif //BIRD_H