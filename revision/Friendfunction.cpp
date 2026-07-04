#include<bits/stdc++.h>
using namespace std;

class Box{
    private:
    double width;

    public:
    Box(double w){
        width=w;
    }

    friend void printwidth(Box b);
};

void printwidth(Box b){
    cout<<"The width of the box is "<<b.width<<endl;
}

int main(){
    Box mybox(14.5);

    printwidth(mybox);
}