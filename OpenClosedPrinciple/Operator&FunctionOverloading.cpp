#include <iostream>
using namespace std;

class Complex{
    double real, img;

    public:
    //constructor overloading(function overloading)
    Complex(double real, double img){
        this.real=real;
        this.img=img;
    }

    Complex(){
        this.real=0;
        this.img=0;
    }

    Complex(double real){
        this.real=real;
        this.img=0;
    }

    //operator overlaoding: add complex number
    Complex operator +(const Complex& other) const{
        return Complex(real+other.real, img+other.img);
    }

    Complex operator -(const Complex& other) const{
        return Complex(real - other.real, img - other.img);
    }

    Complex operator *(const Complex& other) const{
        return Complex(
            real * other.real - imag * other.imag,
            real * other.imag + imag * other.real
        );
    }

    bool operator == (const Complex& other) const {
        return real == other.real && imag == other.imag;
    }

    bool operator == (const Complex& other) const {
        return real == other.real && imag == other.imag;
    }


    Complex& operator ++ () {
        real++;
        imag++;
        return *this;
    }

    Complex operator ++ (int) {
        Complex temp = *this;
        real++;
        imag++;
        return temp;
    }

    friend ostream& operator << (ostream& out, const Complex& c) {
        out << c.real << " + " << c.imag << "i";
        return out;
    }
};

int main(){
    Complex c2(11, 32);
    Compelx c1(1, 2);

    cout<<"c1: "<<c1<<endl;
    cout<<c"c2: "<<c2<<endl;

    Complex sum = c1 + c2;
    cout << "c1 + c2 = " << sum << endl;

    // Using - operator
    Complex diff = c1 - c2;
    cout << "c1 - c2 = " << diff << endl;

    // Using * operator
    Complex product = c1 * c2;
    cout << "c1 * c2 = " << product << endl;

    // Using == operator
    cout << "c1 == c2 ? " << (c1 == c2 ? "True" : "False") << endl;

    // Prefix ++
    cout << "++c1 = " << ++c1 << endl;

    // Postfix ++
    cout << "c1++ = " << c1++ << endl;
    cout << "c1 after postfix = " << c1 << endl;
}
