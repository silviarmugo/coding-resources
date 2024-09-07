public class Car {
    public String brand;
    public String model;
    public int year;
    private double price;
    
    //create a constructor
    public Car(String brand, String model, int year){
        this.brand = brand;
        this.model = model;
        this.year = year;
        //this.price = price;
    }

    //mutator
    public void setPrice(double price){
        this.price = price;
    }

    // public void getBrand(){
    //     System.out.printf("The brand is %s\n", this.brand);
    // }

    // public void getModel(){
    //     System.out.printf("The model is %s\n", this.model);
    // }

    // public void getYear(){
    //     System.out.printf("The year is %d\n", this.year);
    // }

    // public void getPrice(){
    //     System.out.printf("The brand is %.2f\n", this.price);
    // }
    public void getDetails(){
        this.displayDetails();
    }

    private void displayDetails(){
        System.out.printf("The brand is %s\n", this.brand);
        System.out.printf("The model is %s\n", this.model);
        System.out.printf("The year is %d\n", this.year);
        System.out.printf("The brand is %.2f\n", this.price);


    }
    
}
