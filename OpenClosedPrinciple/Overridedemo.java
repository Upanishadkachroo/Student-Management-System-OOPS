package OpenClosedPrinciple;

class Animal{
    //method to be overriden
    public Animal sound(){
        System.out.println("Animal makes this sound");
        return this;
    }

    //final method that cannot be overriden
    public final void sleep(){
        System.out.println("Animal sleeping");
    }

    //static method, method hiding not overriding
    public static void run(){
        System.out.println("Animal is running");
    }
}

class Dog extends Animal{
    //overriding with same signature
    @Override
    public Dog sound(){
        //dog is subclass of Animal
        System.out.println("Dog barks");
        return this;
    }

    //static method not overriding
    @Override
    public Dog run(){
        System.out.println("Dog is running");
    }

    //final cannot be overriden
    // @Override
    // public Dog sleep(){}
}


public class Overridedemo {
    public static void main(String[] args) {
        
        //Parent refernce, parent object
        Animal a1=new Animal();
        a1.sound();
        a1.sleep();
        Animal.run();

        //Parent class, child object
        //runtime polymorphism
        Animal a2=new Dog();
        a2.sound();// Calls Dog's overridden method
        a2.sleep();// Calls Animal's final method
        a2.run();// Calls Animal.run() → static binding

        //Child class, child object
        Dog d=new Dog();
        d.sound(); // Dog’s method
        d.sleep(); // Parent final method
        d.run();// Dog's static method (method hiding)
    }
}
