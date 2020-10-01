def shellSort(ip_list):
    
    gap = len(ip_list) // 2
    while gap > 0:

        for i in range(gap, len(ip_list)):
            temp = ip_list[i]
            j = i
# Sort the sub list for this gap

            while j >= gap and ip_list[j - gap] > temp:
                ip_list[j] = ip_list[j - gap]
                j = j-gap
            ip_list[j] = temp

# Reduce the gap for the next element

        gap = gap//2

list = [19,2,31,45,30,11,121,27]

shellSort(list)
print(list)