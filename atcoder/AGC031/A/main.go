package main

import (
	"fmt"
	"math"
)

func main() {
	var N int
	fmt.Scan(&N)
	var S string
	fmt.Scan(&S)

	m := map[byte]uint64{}
	for i := 0; i < N; i++ {
		index := S[i]
		_, e := m[index]
		if e {
			m[index]++
		} else {
			m[index] = uint64(1)
		}
	}

	var res uint64 = 1
	M := uint64(math.Pow10(9) + 7)

	for _, v := range m {
		res *= (uint64(1) + v)
		res = res % M
	}
	fmt.Print(res - uint64(1))

}
