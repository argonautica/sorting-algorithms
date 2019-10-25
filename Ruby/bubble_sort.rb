def bubble_sort(arr)
  length = arr.length - 1

  (0..length).each do |i|
    (0..length - i - 1).each do |j|
      next_i = j + 1
      arr[next_i], arr[j] = arr[j], arr[next_i] if arr[j] > arr[next_i]
    end
  end

  arr
end
