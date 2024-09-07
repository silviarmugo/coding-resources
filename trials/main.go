package main
import "fmt"
func incomeCategory(income int)string{
	if income<20000{
		return "Low income"
	} else if income>=20000 && income <=50000{
		return "Middle income"
	} else {
		return "High income"
	}
}
func main(){
	salaries := []int{30000, 12000, 14000,70000,121000,1500,63000,120000}
	//initialize counters for each category
	lowIncomeCount := 0
	middleIncomeCount :=0
	highIncomeCount :=0

//classify each employee and count them.
for _, salaries :range salaries{
	category := incomeCategory(salaries)
switch category {
case "low income":
	lowIncomeCount ++
case  "middle income":
	middleIncomeCount ++
case "high income":
	highIncomeCount ++
}
}
fmt.Printf("low income: %d employees\n" lowIncomeCount)
fmt.Printf("middle income: %d employees\n" middleIncomeCount)
fmt.Printf("high income: %d employees\n" highIncomeCount)
}