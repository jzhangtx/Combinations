package main

import "fmt"

func GetCombinations(n, k, i int, r []int, result *[][]int) {
	if k == 0 {
		c := make([]int, len(r))
		copy(c, r)
		*result = append(*result, c)
		return
	}

	if i == n+1 {
		return
	}

	for j := i; j <= n; j++ {
		r = append(r, j)
		GetCombinations(n, k-1, j+1, r, result)
		r = r[:len(r)-1]
	}
}

func Combinations(n, k int) [][]int {
	var result [][]int
	var r []int

	GetCombinations(n, k, 1, r, &result)

	return result
}

func main() {
	for {
		fmt.Print("Please enter number n and k: ")
		var n, k int
		fmt.Scan(&n, &k)
		if n == 0 && k == 0 {
			break
		}

		result := Combinations(n, k)
		fmt.Println("Combinations: ")
		for _, v := range result {
			fmt.Println(v)
		}
		fmt.Println("")
	}
}
