package main

import "fmt"

func main(){
	//create an array
	arrays := []int{3, 5, 7, 9, 8, 13, 2, 11, 1}
//call the function
	fmt.Printf("The square of the array is %v\n", square(arrays))
	fmt.Printf("The cube of the array is %v\n",cube(arrays))
}
func square(numbers []int)[]int {
	var num[]int
	for index := 0; index < len(numbers); index++{
		
		num=append(num, numbers[index]*numbers[index])
	}
	return num
}

func cube(nums []int) []int{
	var num[]int
	for _,number := range nums{
		number=number*number*number
		num=append(num, number)
	}
	return num
}
