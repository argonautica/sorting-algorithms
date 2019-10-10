def selectionSort(l):
    for start in range(len(l)):

        #assign start value as minimum value
        minpos=start
        
        for i in range(start,len(l)):
            if(l[i]<l[minpos]):
                minpos=i
            
        (l[start],l[minpos]) = (l[minpos],l[start])


if __name__ == "__main__":
    print('Enter sequence(separated by spaces): ')
    arr=[int(x) for x in input().split()]
    selectionSort(arr)
    print(arr)
