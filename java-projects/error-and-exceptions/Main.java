public class Main{

    public static void main(String[] args) {
        try {
            String[] cars = {"Toyota", "BMW", "Honda"};

            System.out.println(cars[3]);
        } catch (ArrayIndexOutOfBoundsException e){
            System.err.println("Error: " + e.getMessage());
        }
        
    }
}