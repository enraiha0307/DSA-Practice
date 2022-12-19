package main

import (
	"fmt"
	"sort"
)

func main() {
	var nums = []int{3, 5, 2, 6, 1}
	fmt.Println(specialArray(nums))
}

func specialArray(nums []int) int {
	var end int = len(nums)
	var start int = 0
	var i = 0
	sort.Ints(nums)
	for start < end {
		if i <= nums[start] {
			numberOfElemGreater := end - start
			if i != numberOfElemGreater {
				i++
			} else {
				return i
			}
		} else {
			start++
		}
	}
	return -1
}
