package main

import "fmt"

func factorize (num int) []int {
	factors := []int {}

	for i := 2; i <= num; i++ {
		for num % i == 0 {
			factors = append (factors, i)
			num = num/i
	}
}
return factors
}
func main(){
	fmt.Println(factorize(288))
}

