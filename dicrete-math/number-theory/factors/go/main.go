package main

import "fmt"

//use recursion
func factorial(num int) int {
	//base case
	if num == 0 {
		return 1
		//recursive case
	} else {
		return num * factorial(num-1) //function calling itself
	}
}
func main() {
	number := 12
	fmt.Printf("The factorial of the number is %d\n", factorial(number))
}
