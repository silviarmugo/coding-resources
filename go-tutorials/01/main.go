package main

import "fmt"

func main() {
	// students := map[string]string{
	// 	"name":   "Shiro",
	// 	"age":    "27",
	// 	"gender": "female",
	// }
	// fmt.Println(students["age"])
	students := make(map[string]any)
	students["name"] = "Shiro"
	students["age"] = 27
	students["gender"] = "female"

	fmt.Println(students["gender"])
}
