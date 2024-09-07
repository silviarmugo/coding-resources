import java.util.HashMap;
public class Main{

    public static void main(String[] args) {
        HashMap<String, String> cities =
        new HashMap<String, String>();

        cities.put("Kenya", "Nairobi");
        cities.put("Uganda", "Kampala");
        cities.put("Tanzania", "Dodoma");
        cities.put("Rwanda", "Kigali");
        cities.put("Zambia", "Lusaka");
        cities.put("Ethiopia", "Addis ababa");
        cities.put("Senegal", "Dakar");
        cities.put("Somalia", "Mogadishu");

        for (String city: cities.values()){
            System.out.println(city);
        }

        for (String key: cities.keySet()){
            System.out.println("Country: " + key + "Capital City: " + cities);
        }
        System.out.println(cities.get("Kenya"));
        
    }
}