import java.io.BufferedReader;
import java.io.BufferedInputStream;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) {
        //create a buffered reader object
        BufferedReader reader = new BufferedReader
            (new InputStreamReader(System.in)
        );
        try{
            
            System.out.println("Enter your name");
            String name = reader.readLine();
            System.out.println("Hello " + name);

        } catch(IOException error){
            System.err.println("Error occured: " + error.getMessage());
        } finally {
            try {
                reader.close();
            } catch(IOException err){
                System.err.println("Error occured: " + err.getMessage());
            }
        }
    }
}
