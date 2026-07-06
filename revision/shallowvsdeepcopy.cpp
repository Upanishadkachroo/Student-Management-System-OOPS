#include<bits/stdc++.h>
using namespace std;

class abc{
    public:
    int x;
    int *y;

    abc(int _x, int _y){
        this->x=_x;
        this->y=(new int(_y));
    }

    //default dumb copy constructor: shallow copy
    // abc(const abc &obj){
    //     x=obj.x;
    //     y=obj.y;
    // }

    //deep copy
    abc(const abc &obj){
        x=obj.x;
        y=new int(*obj.y);
    }

    void print() const{
        cout<<"x: "<<x<<endl;
        cout<<"ptr y: "<<y<<endl;
        cout<<"content of y (*y): "<<*y<<endl;
    }

    ~abc(){
        delete y;
    }
};

int main(){
    abc a(1, 2);
    cout<<"print a"<<endl;
    a.print();

    //abc b(a);
    abc b=a;//copy constructor

    cout<<"print b"<<endl;
    b.print();
    *b.y=20;
    cout<<"print b"<<endl;
    b.print();

    cout<<"print a"<<endl;
    a.print();

}