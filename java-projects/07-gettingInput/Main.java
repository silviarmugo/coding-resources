import java.util.InputMismatchException;
import java.util.Scanner;
public class Main{
public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    try{
        System.out.print("Enter your name: ");
        String name = scanner.nextLine();
    
        System.out.print("Enter your age: ");
        int age = scanner.nextInt();
    
        System.out.printf("Hi %s, you are %d years old\n", name, age);
        scanner.close();
    } catch(InputMismatchException error){
        throw new InputMismatchException("Unexpected error occured" + error);
    } finally {
        scanner.close();

    }
}
}