import java.util.*;
public class Main {
public static void main(String[] args) {
    // int a = 5;
    // int b = 10;
    // boolean isEqual = a == b;
    // System.out.println(isEqual);
    Scanner scanner = new Scanner(System.in);

    System.out.println("Are you a student (True/False)");
    boolean isStudent = scanner.nextBoolean();

    // if (!isStudent){
    //     System.out.println("You are not a student");
    // } else {
    //     System.out.println("You are a student");
    // }
    String result = !isStudent? "You are not a student": "You are a student";
    System.out.println(result);
    scanner.close();
    }
}