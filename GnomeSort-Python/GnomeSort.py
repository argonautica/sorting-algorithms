def swapPositions(list,posA, posB):
    list[posA], list[posB] = list[posB], list[posA]
    return list
def gnomeSort(listToBeSorted):
    position = 0
    while position < len(listToBeSorted):
        if position == 0 or listToBeSorted[position] >= listToBeSorted[position - 1]:
            position = position +1
        else:
            swapPositions(listToBeSorted, position, position -1)
            position = position -1

    return listToBeSorted

print ("Input numbers you want to sort, seperated by spaces.")
inputList = [int(i) for i in input().split()]
print ("List to be sorted: {0}".format(inputList))
gnomeSort(inputList)
print ("The sorted list: {0}".format(inputList))