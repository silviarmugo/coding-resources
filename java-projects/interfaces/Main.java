public class Main {
    public static void main(String[]args){
        int[] marks = {90, 80, 88, 79, 78};

        Student student = new Student(20, marks);
        student.setName("Jossy");
        student.displayInfo();

    }
    
}
