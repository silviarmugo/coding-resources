public class Box<T, V>{
    private T width;
    private V height;

    public Box(T width, V height){
        this.width = width;
        this.height = height;
    }

    public void display(){
        System.out.printf("Width: %s height: %s\n", this.width, this.height);
    }
}