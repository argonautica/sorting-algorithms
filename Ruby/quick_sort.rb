def quicksort(arr, left = 0, right = nil)
  right = arr.length - 1 if right.nil?

  if left < right
    pivot = right

    partition_index = partition(arr, pivot, left, right)

    quicksort(arr, left, partition_index - 1)
    quicksort(arr, partition_index + 1, right)
  end
  arr
end

def partition(arr, pivot, left, right)
  pivot_value = arr[pivot]
  index = left

  (left..right).each do |i|
    if arr[i] < pivot_value
      arr[i], arr[index] = arr[index], arr[i]
      index += 1
    end
  end
  arr[right], arr[index] = arr[index], arr[right]
  index
end
