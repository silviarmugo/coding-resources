
public class Main{
    public static void main(String[] args) {
        Car subaru = new Car("Blue", 80);
        subaru.setName("Forester");
        subaru.start();
        subaru.accelerate();
        subaru.brake();

        Car toyota = new Car("Grey", 60);
        toyota.setName("Harrier");
        toyota.start();
        toyota.accelerate();
        toyota.brake();
        }
    }
