package main

import "fmt"

func square(num int)int{
	return num*num

}
func main(){
	fmt.Println(square(214))
	var student1 string = "John" //type is string
  var student2 = "Jane" //type is inferred
  x := 2 //type is inferred

  fmt.Println(student1)
  fmt.Println(student2)
  fmt.Println(x)

}