package main

import (
	"fmt"
	"os"
)

func main() {
	var a, b, c, d, e, k int
	fmt.Scan(&a, &b, &c, &d, &e, &k)

	arr := []int{e, d, c, b, a}

	l := len(arr)
	for i := 0; i < l; i++ {
		for j := 0; j < l; j++ {
			if i == j {
				continue
			}
			if arr[i] - arr[j] > k {
				fmt.Print(":(")
				os.Exit(0)
			}
		}
	}
	fmt.Print("Yay!")
}
