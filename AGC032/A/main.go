package main

import (
	"fmt"
	"os"
)

// https://atcoder.jp/contests/agc032/tasks/agc032_a
func main() {
	var N int
	fmt.Scan(&N)

	b := []int{}
	for i := 0; i < N; i++ {
		var tmp int
		fmt.Scan(&tmp)
		b = append(b, tmp)
	}

	// reverse
	br := []int{}
	for i := len(b) - 1; i >= 0; i-- {
		br = append(br, b[i])
	}

	a := make([]int, N)
	c := 0
	l := len(br)
	for i := 0; i < l; i++ {
		if l-i == br[i] {
			a[N-1-c] = br[i]
			c++

			br = remove(br, i)
			l = len(br)
			if l == 0 {
				break
			}
			i = -1
		}
	}
	if len(br) != 0 {
		fmt.Print("-1")
		os.Exit(0)
	}
	for i := 0; i < N; i++ {
		fmt.Println(a[i])
	}
}

func remove(arr []int, index int) []int {
	l := len(arr)
	res := []int{}
	for i := 0; i < l; i++ {
		if i == index {
			continue
		}
		res = append(res, arr[i])
	}
	return res
}
