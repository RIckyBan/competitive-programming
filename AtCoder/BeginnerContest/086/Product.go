package main

import (
	"fmt"
)

func main() {
	var a int
	fmt.Scan(&a)

	var b int
	fmt.Scan(&b)

	var product int
	product = a * b

	if product%2 == 0 {
		fmt.Println("Even")
	} else {
		fmt.Println("Odd")
	}
}
