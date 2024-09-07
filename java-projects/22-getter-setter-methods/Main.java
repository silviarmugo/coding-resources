public class Main {
    public static void main(String[] args) {
        Person person1 = new Person("Alice", 28);

        //using getter methods
        System.out.println("Persons name: " + person1.getName());
        System.out.println("Persons age: " + person1.getAge());  
        //using setter methods
        person1.setName("Jossy");     
        person1.setAge(30);

        // Using getter methods again to see the changes
        System.out.println("Updated Name: " + person1.getName());
        System.out.println("Updated Age: " + person1.getAge());
    }
    
}
