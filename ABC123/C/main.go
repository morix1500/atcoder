package main

import (
	"fmt"
)

func main() {
	var N, A, B, C, D, E int
	fmt.Scan(&N, &A, &B, &C, &D, &E)

	arr := []int{A, B, C, D, E}
	iti := []int{N, 0, 0, 0, 0}

	l := len(arr)
	res := 1
	for {
		for i := l - 1; i >= 0; i-- {
			if i == 0 {
				break
			}
			if iti[i-1] > arr[i-1] {
				iti[i-1] -= arr[i-1]
				iti[i] += arr[i-1]
			} else {
				iti[i] += iti[i-1]
				iti[i-1] -= iti[i-1]
			}
		}
		res++

		if iti[l-1] == N {
			break
		}
	}
	fmt.Print(res)
}
