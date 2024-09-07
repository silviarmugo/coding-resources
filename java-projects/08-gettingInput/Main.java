import java.util.*;
public class Main {

public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    try{
        System.out.print("Enter the first number: ");
        int num1 =scanner.nextInt();
    
        System.out.print("Enter the second number: ");
        int num2 =scanner.nextInt();
    
        int result = num1 + num2;
    
        System.out.println("The answer is " + result);
    } catch (InputMismatchException error){
        throw new InputMismatchException("Error is " + error);
    } finally{
        scanner.close();
    }

}
}