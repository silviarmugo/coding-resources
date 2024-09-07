/**
 * InnerAnimal
 */
interface AnimalContract {
    void walk();
    void sleep();
    
}
public class Animal implements AnimalContract {
    @Override
    public void walk(){
        System.out.println("Walking");
    }
    @Override
    public void sleep(){
        System.out.println("Sleeping");
    }
    
}
