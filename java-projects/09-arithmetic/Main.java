public class Main {
public static void main(String[] args) {
    int count = 0; int sum = 0;
    while (count <= 20){
            if (count % 2 == 0){
                System.out.println(count);
                sum = count + sum;
            }
            count ++;
    }
    System.out.println(sum);
}
}