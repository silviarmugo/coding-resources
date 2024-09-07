package main

import "fmt"

func main(){
	var number = 7458755

	if isEven (number) == true {

	fmt.Printf("The number %d is even\n", number)
} else {
	fmt.Printf("The number %d is odd\n", number)
}
}
	//This function returns a boolean value
func isEven(num int) bool{

	if num%2 == 0 {
		return true
	} else {
		return false
	}
}
