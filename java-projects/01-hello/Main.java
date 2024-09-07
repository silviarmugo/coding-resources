public class Main{
    public int sum(int x, int y){
        return x + y;
    }

public static void greet(String name){
    System.out.println("Hi " + name);
}

public static void main(String[] args){
    int num1 = 5, num2 = 10;
    String str = "Basil";
    double salary = 30000.0;
    int[] nums = {1, 2, 3, 4, 5};

    //create an instance of the class
    Main obj = new Main();//instantiating the class
    
    //access the method
    int result =obj.sum(num1, num2);

    for (int i = 0; i < nums.length; i++){
        if(i > 2){
        System.out.println(i);
        }
    }

   // System.out.printf("The answer is %d\n", sum(num1, num2));
    System.out.printf("%s earns %.2f\n", str, salary);
    System.out.printf("shiro is %d years old \n", result);
}}