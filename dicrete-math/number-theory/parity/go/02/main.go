package main

import "fmt"

func main (){
	var number int //declare variable

	fmt.Println("Please enter any integer")
	fmt.Scanln(&number) // accept user input
	//fmt.Println(&number)
	
if isEven(number)  {
	fmt.Printf("The number %d is even\n", number)
} else {
	fmt.Printf("The number %d is odd\n", number)
}

}

func isEven(num int) bool {
	if num % 2 == 0 {
		return true
	}
	return false
}