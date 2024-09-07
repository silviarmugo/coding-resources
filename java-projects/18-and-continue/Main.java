public class Main{
    public static void main(String[] args) {
        
        for(int i = 0; i < 10; i ++){
            if (i == 5){
                break;
            }
            System.out.println(i);
        }

        int i = 0;
        while (i < 10){
            if (i == 5){
                break;
            }
            System.out.println(i);
            i++;
        }
        for(int count = 0; count < 10; count ++){
            if (count % 2 == 0){
                continue;
            }
            System.out.println(count);
        }
    }
}