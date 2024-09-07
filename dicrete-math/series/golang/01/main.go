package main

import "fmt"

func fibonacci(n int) int {
	if n <= 1 {
		return n
	}
	return fibonacci(n-1) + fibonacci(n-2)
}
func main() {
	n := 12
	fmt.Printf("The next fibonacci number is %d\n", fibonacci(n))
}
