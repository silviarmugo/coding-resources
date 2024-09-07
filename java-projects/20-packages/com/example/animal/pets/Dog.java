package com.example.animal.pets;
import com.example.animal.Animal;

public class Dog extends Animal{

    @Override
    public void sound(){
        System.out.println("Barking");
    }
     
    public void walk(){
        System.out.println("Walking");
    }
}
