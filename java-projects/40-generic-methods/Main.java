public class Main{
    public static <T> void printArray(T[]array){
        for(T element: array){
            System.out.println(element);
        }
    }

    public static void main(String[] args) {
        String [] cars = {"Subaru", "Aston Martin", "Bentley"};
        printArray(cars);

        Integer[] nums = {10, 20, 30, 40, 50};
        printArray(nums);

    }
}