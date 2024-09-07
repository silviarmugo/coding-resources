import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class Main{
    public static void main(String[] args) {
        List<String> fruits = new ArrayList<>();
        
        fruits.add("Apple");
        fruits.add("Banana");
        fruits.add("Watermelon");
        fruits.add("Oranges");
        fruits.add("Pineapple");
        fruits.add("Mango");

        //obtain an iterator
        Iterator<String> iterator = fruits.iterator();

        while (iterator.hasNext()){
            String fruit = iterator.next();
            System.out.println(fruit);

            //remove an element
            if(fruit.equals("Mango")){
                iterator.remove();
            }
        }
        System.out.println(fruits);
    }
}