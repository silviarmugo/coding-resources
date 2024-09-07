package main

import "fmt"

func main() {
	// Sample salary figures
	salaries := []int{3000, 12000, 14000, 70000, 30000, 121000, 18000, 6300}

	// Define salary categories
	highIncome := "High Income"
	middleIncome := "Middle Income"
	lowIncome := "Low Income"

	// Count employees in each category
	counts := make(map[string]int)
	for _, salary := range salaries {
		category := determineCategory(salary)
		counts[category]++
	}

	// Display the results
	fmt.Printf("%s: %d\n", highIncome, counts[highIncome])
	fmt.Printf("%s: %d\n", middleIncome, counts[middleIncome])
	fmt.Printf("%s: %d\n", lowIncome, counts[lowIncome])
}

// Function to determine the category for a given salary
func determineCategory(salary int) string {
	switch {
	case salary < 20000:
		return "Low Income"
	case salary >= 20000 && salary <= 50000:
		return "Middle Income"
	default:
		return "High Income"
	}
}
