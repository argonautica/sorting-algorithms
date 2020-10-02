#######################################
###
### Author :  Divyesh Mehta
### Algorithm : Pancake Sort
### Language : Python
###
########################################

from random import randint

def twist(arr, i):
    head = 0
    while head < i:
        temp = arr[head]
        arr[head] = arr[i]
        arr[i] = temp
        head = head + 1
        i = i - 1

def max_num(arr, n):
    flag = 0
    for i in range(0, n):
        if arr[i] > arr[flag]:
            flag = i
    return flag

def pancake_sort(arr, n):
    size = n
    while size > 1:
        flag = max_num(arr, size)
        if flag != size - 1:
            twist(arr, flag)
            twist(arr, size - 1)
        size = size - 1

    print("Sorted Array:")

    for i in range(n):
        print(arr[i], end=" ")

arr = []

for i in range(5):
    arr.append(randint(0,100))

print("Initial Array : {}".format(arr))

pancake_sort(arr, len(arr))

