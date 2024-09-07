interface AnimalInterface {
    public void sleep();
    public void eat();
}

public class Animal implements AnimalInterface{
    @Override
    public void eat(){
        System.out.println("Eating");
    }
    @Override
    public void sleep(){
        System.out.println("Sleeping");
    }

    
}
