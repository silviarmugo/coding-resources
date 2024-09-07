import java.util.Arrays;
interface Gradeable{
    
}
public class Student {
    private String name;
    int[] marks;
    int age;
    String className = "Form 1";


    public Student(int age, int[] marks){
        this.age = age;
        this.marks = marks;
    }
    public void setName(String name){
        this.name = name;
    }
    public void displayInfo(){
        System.out.println("Name: " + this.name);
        System.out.println("Age: " + this.age);
        System.out.println("Class: " + this.className);
        System.out.println("Marks: " + Arrays.toString(this.marks));
        System.out.println("Grade:" + this.calculateGrade(this.marks));
    }
    public String calculateGrade(int[] scores){
        int count =scores.length;
        int total = 0;

        for(int i = 0; i < count; i++){
            total += scores[i];
        }
        double average = total / count;
        String grade = this.getGrade(average);
        return grade;

    }
    private String getGrade(double average){
        if (average >= 80 && average <= 100){
            return "A";
        }
        else if (average >= 70 && average <= 79){
            return "B";
        }
        else if (average >= 60 && average <= 69){
            return "C";
        }
        else if (average >= 50 && average <= 59){
            return "D";
        }
        else if (average >= 40 && average <= 49){
            return "E";
        }
        else {
            return "F";
        }

    }
    
}
