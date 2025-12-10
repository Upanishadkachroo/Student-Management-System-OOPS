package OpenClosedPrinciple;

class Complex{
    private double real, img;

    //constructor overloading
    public Complex(){
        this.real=0;
        this.img=0;
    }
    public Complex(double real){
        this.real=real;
        this.img=0;
    }

    public Complex(double real, double img){
        this.real=real;
        this.img=img;
    }

    //method overlaoding equivalent to operator overlaoding
    public Complex add(Complex c){
        return new Complex(this.real+c.real, this.img+c.img);
    }

    public Complex sub(Complex c){
        return  new Complex(this.real-c.real, this.img-c.img);
    }

    public Complex multiply(Complex c) {
        return new Complex(
            this.real * c.real - this.img * c.img,
            this.real * c.img + this.img * c.real
        );
    }

    // Compare using a method (Java has no operator overloading for ==)
    public boolean isEqual(Complex c) {
        return this.real == c.real && this.img == c.img;
    }

    // Overloading toString (not polymorphism, but overriding)
    @Override
    public String toString() {
        return real + " + " + img + "i";
    }

}

public class Compiletimepoly {
    public static void main(String[] args) {
        Complex c1=new Complex(1,5);
        Complex c2=new Complex(2,3);
    }
}
