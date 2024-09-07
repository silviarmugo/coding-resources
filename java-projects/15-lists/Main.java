import java.util.ArrayList;
import java.util.List;

public class Main{
    public static void main(String[]args){
        List<String> animals = new ArrayList<String>();
        animals.add("cows");
        animals.add("cat");
        animals.add("giraffe");
        animals.add("elephant");

        for (String el: animals){
            System.out.println(el);
        }


    }
}