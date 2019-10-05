import random

def isSorted(arr)
    if len(arr) == 0 or len(arr) == 1
        return True
    for i in range(len(arr)-1)
        if(arr[i]  arr[i+1])
            return False
    return True

def bogosort(arr)
    while not isSorted(arr)
        random.shuffle(arr)
    return arr