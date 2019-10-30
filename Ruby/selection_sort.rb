def selection_sort(arr)
  n = arr.length
  (0...n).each do |i|
    ((i + 1)...n).each do |j|
      arr[j], arr[i] = arr[i], arr[j] if arr[j] < arr[i]
    end
  end
  arr
end