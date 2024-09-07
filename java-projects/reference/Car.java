interface CarContract{
    public void start();
    public void accelerate();
    public void setName(String model);
}

public class Car implements CarContract{
    private String name;
    public String color;
    public int speed = 0;

    public Car(String color, int speed){
        this.color = color;
        this.speed = speed;
    }

    public void start(){
        System.out.println("The car has started");
    }

    public void accelerate(){
        this.speed += 10;
        System.out.printf("Car %s is accellerating at %d km/h\n",this.name, this.speed);
    }

    public void brake(){
        this.speed -= 5;
        System.out.printf("Car %s is slowing down at %d km/h\n\n" ,this.name, this.speed);
    }

    public void setName(String model){
        this.name = model;

    }


    }
    
