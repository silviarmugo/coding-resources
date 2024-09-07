public class Main{
    public static void main(String[] args) {
        try {
            int result = 10 / 0;
            System.out.println(result);
            
        } catch (ArithmeticException e) {
           //System.out.println("Error: division by zero");
           throw new ArithmeticException("Error: division by zero");
        }
    }
}