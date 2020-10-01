package main

import (
    "fmt"
)

func selectionSort(arr []int) {

	for i, x := range arr[:len(arr)-1] {
        k := i
        for j, y := range arr[i+1 : len(arr)] {
            if x > y {
                k = i + 1 + j
                x = y
            }
        }
        arr[k], arr[i] = arr[i], x
    }
}

func main() {

    array := []int{5, 8, 4, 1, 7,  2, 3, 6}
    fmt.Println("Unsorted array: ", array)
    selectionSort(array)
    fmt.Println("Sorted array: ", array)
}