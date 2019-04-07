package main

import "fmt"

func main() {
	var N int
	fmt.Scan(&N)
	var S string
	fmt.Scan(&S)

	z := 1000000007

	m := map[byte]int{}
	for i := 0; i < N; i++ {
		_, e := m[S[i]]
		if e {
			m[S[i]]++
		} else {
			m[S[i]] = 1
		}
	}

	res := 1
	for _, v := range m {
		res *= (1 + v)
	}
	res -= 1
	fmt.Print(res % z)

}
