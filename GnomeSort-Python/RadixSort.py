def radixSort(listToBeSorted):
    cyphers = 10
    maxLength = False
    placement = 1

    while not maxLength:
        maxLength = True

        buckets = [list() for _ in range(cyphers)]
        for i in listToBeSorted:
            tmp = i // placement
            buckets[tmp % cyphers].append(i)
            if maxLength and tmp > 0:
                maxLength = False
        element = 0
        for cipher in range(cyphers):
            bucket = buckets[cipher]
            for buck in bucket:
                listToBeSorted[element] = buck
                element += 1

        placement *= cyphers


print ("Input integers you want to sort, seperated by spaces.")

inputList = [int(i) for i in input().split()]

print ("List to be sorted: {0}".format(inputList))

radixSort(inputList)

print ("The sorted list: {0}".format(inputList))
