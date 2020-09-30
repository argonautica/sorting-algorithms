# This is a sample code for the Shell sort, or Decreasing Increment sort algorithm, in Python

def shellSort(arr):    
    div = len(arr) // 2                                       # Integer division to get a whole number quotient
    while div > 0:
        for i in range(div, len(arr)):
            temp = arr[i]
            j = i

            # The sub list is sorted for this division
            while j >= div and arr[j - div] > temp:
                arr[j] = arr[j - div]
                j = j - div
            arr[j] = temp
        div = div//2                                          # The division is reduced for the next run



# Driver code
arr = [18, 92, 37, 90, 45]

shellSort(arr)

print ("Sorted array is:")
for i in range(len(arr)):
	print ("%d" %arr[i])
