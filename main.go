package main

import "fmt"

type person struct {
	name   string
	age    int
	job    string
	salary float32
}

func main() {
	var employee1 person
	var employee2 person
	var employee3 person

	//employee1 specification
	employee1.name = "Jossy"
	employee1.age = 26
	employee1.job = "Software engineer"
	employee1.salary = 212000

	//employee2 specifications
	employee2.name = "Karen"
	employee2.age = 38
	employee2.job = "Teacher"
	employee2.salary = 49014.23
	//employee3 specifications
	employee3.name = "Njoroge"
	employee3.age = 23
	employee3.job = "Sales rep"
	employee3.salary = 20142.65
	//print each employees info by calling the function
	printPerson(employee1)
	printPerson(employee2)
	printPerson(employee3)

}
func printPerson(employee person) {
	fmt.Println("Name: ", employee.name)
	fmt.Println("Age: ", employee.age)
	fmt.Println("Job: ", employee.job)
	fmt.Println("Salary: ", employee.salary)
}
