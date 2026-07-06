#include<bits/stdc++.h>
using namespace std;

class Shape{
    public:
    void draw(){
        cout<<"Generic drawing.."<<endl;
    }
};

class Circle: public Shape{
    public:
    void draw(){
        cout<<"Circle drawing.."<<endl;
    }
};

class Rectangle: public Shape{
    public:
    void draw(){
        cout<<"Rectangle drawing.."<<endl;
    }
};

class Triangle: public Shape{
    public:
    void draw() {
        cout<<"Triangle drawing.."<<endl;
    }
};

//making all the function of child class being accesed through its base class
void shapedrawing(Shape *s){
    s->draw(); //draw is polymorphic
}

int main(){
    // Circle c;
    // Rectangle r;

    // // c.draw();
    // // r.draw();

    // shapedrawing(&c);
    // shapedrawing(&r);

    // Triangle *t=new Triangle();
    // shapedrawing(t);

    //w/o virtual keyword
    Shape *s=new Shape();
    s->draw();

    //UPCASTING
    Shape *s3=new Circle();
    s3->draw();

    Circle *c=new Circle();
    c->draw();

    //DOWNCASTING
    Shape *s2=new Shape();
    Circle *c2=(Circle *)s2;
    c2->draw();
}