package main

import "fmt"

func main() {
	number := 6
 fmt.Printf("The factorial of %d is %d\n", number, factorial(number))
}


func factorial(n int) int {
    if n == 0 {
		return 1
	} else {
		return  n * factorial(n-1)
	}
}