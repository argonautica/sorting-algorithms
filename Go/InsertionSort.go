import ("fmt")

func insertionsort(items []int) {
    var n = len(items)
    for i := 1; i < n; i++ {
        j := i
        for j > 0 {
            if items[j-1] > items[j] {
                items[j-1], items[j] = items[j], items[j-1]
            }
            j = j - 1
        }
    }
}

func main() {
    unsorted :=[]int{9386, 234, 369, 4863, 611, 1, 0, 55, 69, 928, 2267, 28}
	  fmt.Println("Unsorted:", unsorted, "\n")

	  sorted := radixSort(unsorted)
	  fmt.Println("\nSorted:", sorted, "\n")
}
