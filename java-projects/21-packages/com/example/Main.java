package com.example;
import com.example.shapes.Circle;
import com.example.shapes.Rectangle;

public class Main{
    public static void main(String[] args) {
        Rectangle rectangle = new Rectangle(15, 10);
        rectangle.getArea();
        
        Circle circle = new Circle(12);
        circle.getArea();

        System.out.println("The area of a rectangle is %d: "+ rectangle.getArea());
        System.out.println("The area of a circle is %d:  "+ circle.getArea());

    }
}