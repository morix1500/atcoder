package main

import (
	"fmt"
	"strings"
)

func main() {
	var S string
	fmt.Scan(&S)

	s := S
	s = strings.Replace(s, "eraser", "", -1)
	s = strings.Replace(s, "erase", "", -1)
	s = strings.Replace(s, "dreamer", "", -1)
	s = strings.Replace(s, "dream", "", -1)

	if s == "" {
		fmt.Print("YES")
	} else {
		fmt.Print("NO")
	}
}
