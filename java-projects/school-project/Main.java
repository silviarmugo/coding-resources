import java.util.InputMismatchException;
import java.util.Scanner;
public class Main{

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        StudentManager studentManager = new StudentManager(scanner);
        try{
            while (true) {
               // System.out.println("Menu:");
                System.out.println("1. Register Student");
                System.out.println("2. View Student Details");
                System.out.println("3. Check Balance");
                System.out.println("4. Exit");
    
                System.out.print("Enter your option: ");
                int option = scanner.nextInt();
                scanner.nextLine();
    
                switch (option) {
                    case 1:
                        studentManager.registerStudent();
                        break;
                    case 2:
                        studentManager.viewStudentDetails();
                        break;
                    case 3:
                        studentManager.checkBalance();
                        break;
                    case 4:
                        System.out.println("Program exiting");
                        return;
    
                    default:
                        System.out.println("Invalid option, choose a number between 1 and 4");
                        break;
                }

        }
                } catch(InputMismatchException error){
                    throw new InputMismatchException("Unexpected error occured" + error);
                } finally {
                    scanner.close();
                }

                }
        }
    