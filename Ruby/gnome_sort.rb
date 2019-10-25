def gnome_sort(arr)
  pos = 0
  while pos < arr.count
    if pos.zero? || arr[pos] >= arr[pos - 1]
      pos += 1
    else
      arr[pos], arr[pos - 1] = arr[pos - 1], arr[pos]
      pos -= 1
    end
  end
  arr
end
