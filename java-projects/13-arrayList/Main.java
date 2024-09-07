import java.util.ArrayList;
import java.util.Collections;

public class Main{
    public static void main(String[] args){
        ArrayList<String> cars = new ArrayList<>();

        cars.add("Toyota");
        cars.add("BMW");
        cars.add("Volvo");
        cars.add("harrier");
        cars.add("subaru");
        cars.add("bentley");
        cars.add("benz");

        for (int i = 0; i < cars.size(); i++){
            System.out.println(cars.get(i));

        //enhanced for loop
        // for(String car: cars){
        //     System.out.println(car);
        // }
        }ArrayList<Integer> nums = new ArrayList<>();

        nums.add(12);
        nums.add(156);
        nums.add(3);
        nums.add(45);
        nums.add(78);
        Collections.sort(nums);

        System.out.println(nums);

        }

    }
