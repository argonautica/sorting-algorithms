import java.util.Arrays;

/**
 * This class holds an example for a CombSort implementation with a main as an
 * example.
 *
 * Comb Sort is mainly an improvement over Bubble Sort. Bubble sort always compares adjacent values. 
 * So all inversions are removed one by one. Comb Sort improves on Bubble Sort by using gap of size 
 * more than 1. The gap starts with a large value and shrinks by a factor of 1.3 in every iteration 
 * until it reaches the value 1. Thus Comb Sort removes more than one inversion counts with one swap 
 * and performs better than Bubble Sort.
 *
 * The shrink factor has been empirically found to be 1.3
 * 
 */

public final class CombSort 
{ 
	// To find gap between elements 
	static int getNextGap(int gap) 
	{ 
		// Shrink gap by Shrink factor 
		gap = (gap*10)/13; 
		if (gap < 1) 
			return 1; 
		return gap; 
	} 

	// Function to sort arr[] using Comb Sort 
	static void combSort(int arr[]) 
	{ 
		int length = arr.length; 

		// initialize gap 
		int gap = length; 

		// Initialize swapped as true to make sure that 
		// loop runs 
		boolean swapped = true; 

		// Keep running while gap is more than 1 and last 
		// iteration caused a swap 
		while (gap != 1 || swapped == true) 
		{ 
			// Find next gap 
			gap = getNextGap(gap); 

			// Initialize swapped as false so that we can 
			// check if swap happened or not 
			swapped = false; 

			// Compare all elements with current gap 
			for (int i=0; i<length-gap; i++) 
			{ 
				if (arr[i] > arr[i+gap]) 
				{ 
					// Swap arr[i] and arr[i+gap] 
					int temp = arr[i]; 
					arr[i] = arr[i+gap]; 
					arr[i+gap] = temp; 

					// Set swapped 
					swapped = true; 
				} 
			} 
		} 
	} 

	// Driver method 
	public static void main(String args[]) 
	{ 
		int arr[] = {8, 4, 1, 56, 3, -44, 23, -6, 28, 0}; 
		System.out.println(Arrays.toString(arr));
		combSort(arr); 
		System.out.println(Arrays.toString(arr));
	} 
} 
