public class Main{

    public static void validateAge(int age) throws InvalidAgeException{
        if (age < 0 || age > 120){
            throw new InvalidAgeException("Invalid age number: " + age);
        }
    }

    public static void main(String[] args) {
        int age = -5;
        
        try {
            validateAge(age);
            
        } catch (InvalidAgeException e) {
            System.err.println("Error: " + e.getMessage());
        }
        
    }
}