package main

import "fmt"

func main() {
	var S string
	fmt.Scan(&S)

	cnt := 0
	max := 0
	for i := 0; i < len(S); i++ {
		if S[i] == 'A' || S[i] == 'C' || S[i] == 'G' || S[i] == 'T' {
			cnt++
		} else {
			if max < cnt {
				max = cnt
			}
			cnt = 0
		}
	}
	if max < cnt {
		max = cnt
	}
	fmt.Println(max)
}
