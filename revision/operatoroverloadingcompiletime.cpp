#include<bits/stdc++.h>
using namespace std;

class Complex{
    public:
    int real;
    int imag;

    Complex(){
        real=imag=-1;
    }

    Complex(int r, int i){
        this->real=r;
        this->imag=i;
    }

    void print(){
        cout<<"["<<this->real<<" + "<<"i"<<this->imag<<"]"<<endl;
    }

    Complex operator+(const Complex &B){
        //this -> A instance
        Complex temp;
        temp.real=this->real + B.real;
        temp.imag=this->imag + B.imag;

        return temp;
    }

    bool operator==(const Complex &B){
        return (this->real == B.real) && (this->imag == B.imag);
    }
};

int main(){
    Complex A(2, 5);
    A.print();
    Complex B(3, 4);
    B.print();

    Complex C= A + B;
    //cout<<"Sum of the complex number is "<<C.print()<<endl;

    bool D = A == B;
    cout<<D<<endl;
}