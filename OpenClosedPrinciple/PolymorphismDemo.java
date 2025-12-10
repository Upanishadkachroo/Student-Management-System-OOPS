package OpenClosedPrinciple;

import java.util.ArrayList;
import java.util.List;



class Flymachine{
    public void fly(){
        System.out.println("No implementation");
    }
}

class Jet extends Flymachine{
    @Override
    public void fly(){
        System.out.println("Jet: Start, taxi, Fly");
    }
}

class Helicopter extends Flymachine{
    @Override
    public void fly(){
        System.out.println("Helicopter: Start, vertical takeoff, fly");
    }
}

class Drone extends Flymachine{
    @Override
    public void fly(){
        System.out.println("Drone: Start, auto-stablize, fly");
    }
}

class Makethingsfly{
    public void letmakethingsfly(List<Flymachine> machines){
        for(Flymachine fm: machines){
            fm.fly();//runtime polymorphism
        }
    }
}

public class PolymorphismDemo {
    public static void main(String[] args) {
        List<Flymachine> machines=new ArrayList<>();

        machines.add(new Jet());
        machines.add(new Helicopter());
        machines.add(new Drone());
        machines.add(new Jet());

        Makethingsfly controller = new Makethingsfly();
        controller.letmakethingsfly(machines);

    }
}
