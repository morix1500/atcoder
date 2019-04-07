package main

import (
	"fmt"
)

func main() {
	var N, Q int
	var S string
	fmt.Scan(&N, &Q, &S)

	t := make([]int, N)
	a := 0
	for i := 0; i < N; i++ {
		if S[i] == 'C' {
			if i != 0 && S[i-1] == 'A' {
				a++
			}
		}
		t[i] = a
	}

	for i := 0; i < Q; i++ {
		var l, r int
		fmt.Scan(&l, &r)
		fmt.Println(t[r-1] - t[l-1])
	}
}
