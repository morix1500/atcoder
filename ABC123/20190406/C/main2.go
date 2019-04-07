package main

import (
	"fmt"
	"math"
)

func main() {
	var N, A, B, C, D, E int
	fmt.Scan(&N, &A, &B, &C, &D, &E)

	arr := []int{A, B, C, D, E}

	l := len(arr)

	min := A
	for i := 0; i < l; i++ {
		if min > arr[i] {
			min = arr[i]
		}
	}

	fmt.Print(math.Ceil(float64(N)/float64(min)) + 4)
}
