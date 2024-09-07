package main

import "fmt"
func main(){
	//declare and initialize a variable with value
	var number float32 = 5 //number := 5
	fmt.Printf("The result is %.3f\n", evaluate(number))
}

// function evaluate has 1 param as input
func evaluate(num float32)float32{
	return ((num * num * num) -10 + num)/(num*num+3)

}
