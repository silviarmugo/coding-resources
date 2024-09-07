import java.util.InputMismatchException;
import java.util.Scanner;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
//import java.io.Writer;

public class StudentManager{
    private static final String csvFile = "students.csv";
    private Scanner scanner;
    public int admNumber;

    public StudentManager(Scanner scanner){
        this.scanner = scanner;

    }
    //method to validate if admission number exists
    public boolean isAdmissionNumberExists(int admNumber) {
        try (BufferedReader br = new BufferedReader(new FileReader(csvFile))) {
            String line;
            while ((line = br.readLine()) != null) {
                String[] details = line.split(", ");
                if (details.length == 6) {
                    int admission = Integer.parseInt(details[3]);
                    if (admission == admNumber) {
                        return true;
                    }
                }
            }
        } catch (IOException e) {
            System.out.println("Error while reading the file");
            e.printStackTrace();
        }
        return false;
    }

    public void registerStudent() {
        FileWriter fileWriter = null;

            // System.out.println("Are you a new student? (yes/no)");
            // String choice = scanner.nextLine();
            // if (!choice.equalsIgnoreCase("yes")) {
            //     return;
            // }
            


            try{
                //open the file in append mode
                fileWriter = new FileWriter(csvFile, true);

                    System.out.print("Enter your Admission: ");
                    int admission = scanner.nextInt();
                    scanner.nextLine();
                                    // Check if admission number already exists
                    if (isAdmissionNumberExists(admNumber)) {
                        System.out.println("Admission number " + admission + " already exists. Please use a different admission number.");
                        System.exit(0);
                    }
                    System.out.print("Enter your name: ");
                    String name = scanner.nextLine();
    
                    System.out.print("Enter your Course name: ");
                    String courseName = scanner.nextLine();
                    
                    System.out.print("Enter your Student class: ");
                    String studentClass = scanner.nextLine();
    
                    System.out.print("Enter your Age: ");
                    int age = scanner.nextInt();
                    scanner.nextLine();
    
                    // System.out.print("Enter your Admission: ");
                    // admission = scanner.nextInt();
                    // scanner.nextLine();
                    // // Check if admission number already exists
                    // if (isAdmissionNumberExists(admission)) {
                    //     System.out.println("Admission number " + admission + " already exists. Please use a different admission number.");
                    //     return;
                    // }
    
                    System.out.print("Enter your Balance: ");
                    double balance = scanner.nextDouble();
                    scanner.nextLine();
    
                    Student student = new Student();
                    student.setName(name);
                    student.setCourseName(courseName);
                    student.setStudentClass(studentClass);
                    student.setAge(age);
                    student.setAdmission(admission);
                    student.setBalance(balance);
    
                
                        fileWriter.write(String.format("%s, %s, %s, %d, %d, %.2f%n",
                        student.getName(),
                        student.getCourseName(),
                        student.getStudentClass(),
                        student.getAge(),
                        student.getAdmission(),
                        student.getBalance()));
    
                        System.out.println("Student registered successfully");

                    } catch (IOException e) {
                        System.out.println("Error while opening the file");
                        e.printStackTrace();
            }
            
                    catch (InputMismatchException e) {
                        System.out.println("Invalid input format. Please enter correct data types.");
                        scanner.nextLine(); // Clear the scanner buffer
                    }
                    finally {
                        if (fileWriter != null) {
                            try {
                                fileWriter.close();
                            } catch (IOException e) {
                                System.out.println("Error while closing the file");
                                e.printStackTrace();
                            }
                        }
                    }
        
}

                public void viewStudentDetails() {
                System.out.println("Enter your admission number:");
                int admNumber = scanner.nextInt();
                scanner.nextLine(); // Clear the scanner buffer

                try (BufferedReader br = new BufferedReader(new FileReader(csvFile))) {
                    String line;
                    boolean found = false;

                    while ((line = br.readLine()) != null) {
                        String[] details = line.split(", ");
                        if (details.length == 6) {
                            String name = details[0];
                            String courseName = details[1];
                            String studentClass = details[2];
                            int age = Integer.parseInt(details[3]);
                            int admission = Integer.parseInt(details[4]);
                            double balance = Double.parseDouble(details[5]);

                            if (admission == admNumber) {
                                System.out.println("Name: " + name);
                                System.out.println("Course Name: " + courseName);
                                System.out.println("Class: " + studentClass);
                                System.out.println("Age: " + age);
                                System.out.println("Admission Number: " + admission);
                                System.out.println("Balance: " + balance);
                                found = true;
                                break;
                            }
                        }
                    }

                    if (!found) {
                        System.out.println("Student details for admission number " + admNumber + " not found");
                    }
                } catch (IOException e) {
                    System.out.println("Error while opening the file");
                    e.printStackTrace();
                }
            }

            public void checkBalance() {
                System.out.println("Enter your admission number:");
                int admNumber = scanner.nextInt();
                scanner.nextLine(); // Clear the scanner buffer

                try (BufferedReader br = new BufferedReader(new FileReader(csvFile))) {
                    String line;
                    boolean found = false;

                    while ((line = br.readLine()) != null) {
                        String[] details = line.split(", ");
                        if (details.length == 6) {
                            String name = details[0];
                            // String courseName = details[1];
                            // String studentClass = details[2];
                            // int age = Integer.parseInt(details[3]);
                            int admission = Integer.parseInt(details[4]);
                            double balance = Double.parseDouble(details[5]);

                            if (admission == admNumber) {
                                System.out.println("Dear " + name + ", your balance for admission " + admission + " is " + balance);
                                found = true;
                                break;
                            }
                        }
                    }

                            if (!found) {
                                System.out.println("Fee balance details for admission number " + admNumber + " not found");
                            }
                        } catch (IOException e) {
                            System.out.println("Error while opening the file");
                            e.printStackTrace();
                        }
            }


        }