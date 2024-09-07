package main

import "fmt"

func main () {
	// declare and initialize n array of integers
	nums := []int{10, 13, 2, 0, 3, 9, 15,
		          21, 22, 23, 24, 25, 26, 
				  27, 28, 29, 30, 31, 32, 
				  33, 34, 35}

	odds := []int{}
	evens := []int{}

	// use for loop 
	//initial, limit, increment
	for index :=0; index < len(nums); index ++ {
		if isOdd(nums[index]){
			odds = append(odds, nums[index])
		} else {
			evens = append(evens, nums[index])
		}
	}
	fmt.Printf("Total odds are %d\n", len(odds))
	fmt.Printf("Total evens are %d\n", len(evens))

	fmt.Printf("Odd numbers %v\n", odds)
	fmt.Printf("Even numbers %v\n", evens)
}

func isOdd(x int) bool {
	if x%2==1 {
		return true
	}
	return false
} 