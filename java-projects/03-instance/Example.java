public class Example{
    int count;

    public void increment(){
        count ++;
    }
    public static void main(String[] args) {
        Example example1 = new Example();
        example1.increment();
        System.out.println("Count on example1: " + example1.count);

        Example example2 = new Example();
        example2.increment();
        System.out.println("Count on example2: " + example2.count);
        
    }
}