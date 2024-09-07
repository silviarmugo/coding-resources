package  app.pets;

public class Dog extends Animal{
    
    String breed;

    public Dog(String name,String species,String breed){
        super(name,species);
        this.breed = breed;

    }
    public void makeSound(){
        System.out.println("barking");
    }
    
}
