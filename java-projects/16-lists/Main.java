import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Random;

public class Main{
    public static void main(String[] args) {
        Random random = new Random();
        List<Integer> nums = new ArrayList<>();

        for (int i = 0; i < 10; i++){
            nums.add(random.nextInt(1000));
        }
        Collections.sort(nums);
        System.out.println(nums);

    }

}