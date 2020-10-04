# Python Program for implementation of Recursive Bubble sort 

def bubble_sort(number_list): 
	for i, num in enumerate(number_list): 
		try: 
			if number_list[i+1] < num: 
				number_list[i] = number_list[i+1] 
				number_list[i+1] = num 
				bubble_sort(number_list) 
		except IndexError: 
			pass
	return number_list 

# Driver code to test the code above
number_list = [64, 34, 25, 12, 22, 11, 90] 
bubble_sort(number_list) 

print("Sorted array:"); 
for i in range(len(number_list)): 
	print(number_list[i], end=' ') 
