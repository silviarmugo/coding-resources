public class Calculate {
public static void division(int x, int y){
    if (y == 0){
        System.err.println("Error: division by zero\n");
        }
        System.out.printf("Result is: %d\n", x / y);

}
    public static void main(String[] args) {
        int num1 = 10, num2 = 2;
        division(num1, num2);
    }
}