public class Main{

    public static void main(String[] args) {
       
        Animal animal = new Animal();
        Dog dog = new Dog(animal);
        
        dog.execute();
    }
}