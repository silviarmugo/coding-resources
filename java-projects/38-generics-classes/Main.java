public class Main{

    public static void main(String[] args) {
        Box <String> box = new Box<>("Money Box");
       // box.setValue("Money Box");

        System.out.println("Value is: " + box.getValue());

        Box <Integer> box1 = new Box<>(15);
        //box1.setValue(15);

        System.out.println("Value is: " + box1.getValue());

        ColoredBox<Integer> box2 = new ColoredBox<>(15, "white");
        int value = box2.getValue();
       // String color = box2.getColor();

       System.out.println("Box color:" + box2.getColor());
    }
}