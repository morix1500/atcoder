package main

import (
	"fmt"
	"os"
)

func main() {
	var N int
	fmt.Scan(&N)

	t := []int{}
	x := []int{}
	y := []int{}

	for i := 0; i < N; i++ {
		tmpx := 0
		tmpy := 0
		tmpt := 0

		fmt.Scan(&tmpt, &tmpx, &tmpy)
		t = append(t, tmpt)
		x = append(x, tmpx)
		y = append(y, tmpy)
	}

	l := len(t)
	for i := 0; i < l; i++ {
		if t[i] < x[i] || t[i] < y[i] || x[i] < (t[i]*-1) || y[i] < (x[i]*-1) || t[i] < (x[i]+y[i]) || (x[i]+y[i]) < (t[i]*-1) {
			fmt.Print("No")
			os.Exit(0)
		}
		if t[i]%2 == 0 && (x[i]+y[i])%2 != 0 {
			fmt.Print("No")
			os.Exit(0)
		} else if t[i]%2 != 0 && (x[i]+y[i])%2 == 0 {
			fmt.Print("No")
			os.Exit(0)
		}
	}
	fmt.Print("Yes")
}
