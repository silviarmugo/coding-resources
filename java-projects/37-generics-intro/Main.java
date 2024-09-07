import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

public class Main{

    public static void main(String[] args) {
        List<String> list = new ArrayList<>();
        list.add("Toyota");
        list.add("Volvo");
        list.add("Subaru");

        System.out.println(list.get(2));
        HashMap<Integer, String> students = new HashMap<Integer, String>();
        students.put(1001, "Steve Kanjwang");
        students.put(1002, "Silviar Shiro");
        students.put(1003, "Jossy Ngina");

        System.out.println(students.get(1001));
    }
}