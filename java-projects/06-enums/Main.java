import java.util.Arrays;
public class Main {

public static void main(String[] args) {
    enum DAYS {
        MON, TUE, WED, THU, FRI, SAT, SUN
    }
    DAYS[] days = DAYS.values();
    // for (int i = 0; i < days.length; i++){
    //     System.out.println(days[i]);
    // }
    System.out.println(Arrays.toString(days));
}
}