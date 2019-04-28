package main

import (
	"fmt"
	"os"
)

func main() {
	var A, B, C int
	fmt.Scan(&A, &B, &C)

	if (A + B) >= C {
		fmt.Println(B + C)
		os.Exit(0)
	}
	fmt.Println(B*2 + 1 + A)
}
