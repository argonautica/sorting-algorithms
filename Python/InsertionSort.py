def InsertionSort(List):
    for i in range(1, len(List)):
        key = List[i]
        j = i - 1
        while j >= 0 and key < List[j]:
            List[j + 1] = List[j]
            j -= 1
        List[j + 1] = key
    print('The sorted list: \t', List)

if __name__ == "__main__":
    lst = []
    size = int(input("\nEnter size of the list: \t"))
    for i in range(size):
        elements = int(input("Enter the element: \t"))
        lst.append(elements)
    InsertionSort(lst)