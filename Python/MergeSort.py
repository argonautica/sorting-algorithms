def mergeSort(list):

    if len(list) > 1:
        midPointer = len(list) // 2
        left = list[:midPointer]
        right = list[midPointer:]

        mergeSort(left)
        mergeSort(right)

        i = 0
        j = 0
        k = 0

        while (i < len(left)) and (j < len(right)):
            if left[i] < right[j]:
                list[k] = left[i]
                i += 1
            else:
                list[k] = right[j]
                j += 1
            k += 1

        while i < len(left):
            list[k] = left[i]
            i += 1
            k += 1

        while j < len(right):
            list[k] = right[j]
            j += 1
            k += 1
