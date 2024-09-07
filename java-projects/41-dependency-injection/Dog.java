public class Dog {

    Animal animal;
    public Dog(Animal animal){
        this.animal = animal;

    }
    public void execute(){
        this.animal.walk();
        this.animal.sleep();

    }
    
}
