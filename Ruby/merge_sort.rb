def merge_sort(array)
  if array.length <= 1
    return array
  end

  array_size = array.length
  middle = (array.length / 2).round

  left_side = array[0...middle]
  right_side = array[middle...array_size]

  sorted_left = merge_sort(left_side)
  sorted_right = merge_sort(right_side)

  merge(array, sorted_left, sorted_right)

  return array
end

def merge(array, sorted_left, sorted_right)
  left_size = sorted_left.length
  right_size = sorted_right.length

  array_pointer = 0
  left_pointer = 0
  right_pointer = 0

  while left_pointer < left_size && right_pointer < right_size
    if sorted_left[left_pointer] < sorted_right[right_pointer]
      array[array_pointer] = sorted_left[left_pointer]
      left_pointer+=1
    else
      array[array_pointer] = sorted_right[right_pointer]
      right_pointer+=1
    end
    array_pointer+=1
  end

  while left_pointer < left_size
      array[array_pointer] = sorted_left[left_pointer]
      left_pointer+=1
      array_pointer+=1
  end

  while right_pointer < right_size
     array[array_pointer] = sorted_right[right_pointer]
     right_pointer+=1
     array_pointer+=1
  end

  return array
end
