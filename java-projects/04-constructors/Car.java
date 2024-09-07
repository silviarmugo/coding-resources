public class Car{

String brand;
String model;
int year;
double price;

public Car(String brand, String model, int year, double price){
    this.brand = brand;
    this.model = model;
    this.year = year;
    this.price = price;
}

public void getDetails(){
    System.out.println("brand: " + this.brand);
    System.out.println("model: " + this.model);
    System.out.println("year: " + this.year);
    System.out.println("price: " + this.price);
    System.out.println();

}
public static void main(String[]args){
    Car car1 = new Car("Toyota", "Crown", 2015, 2000000);
    Car car2 = new Car("Subaru", "Forester", 2016, 3000000);

    System.out.println("car1 details ");
    car1.getDetails();

    System.out.println("car2 details ");
    car2.getDetails();

}
}
