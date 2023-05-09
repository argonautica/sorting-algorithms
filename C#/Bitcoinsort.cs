/* C# Program for Bitonic Sort. Note that this program
works only when size of input is a power of 2. */
using System;

/*The parameter dir indicates the sorting direction, ASCENDING
or DESCENDING; if (a[i] > a[j]) agrees with the direction,
then a[i] and a[j] are interchanged.*/
class GFG
{
	/* To swap values */
	static void Swap<T>(ref T lhs, ref T rhs)
	{
		T temp;
		temp = lhs;
		lhs = rhs;
		rhs = temp;
	}
	public static void compAndSwap(int[] a, int i, int j, int dir)
	{
		int k;
		if((a[i]>a[j]))
			k=1;
		else
			k=0;
		if (dir==k)
			Swap(ref a[i],ref a[j]);
	}
	
	/*It recursively sorts a bitonic sequence in ascending order,
	if dir = 1, and in descending order otherwise (means dir=0).
	The sequence to be sorted starts at index position low,
	the parameter cnt is the number of elements to be sorted.*/
	public static void bitonicMerge(int[] a, int low, int cnt, int dir)
	{
		if (cnt>1)
		{
			int k = cnt/2;
			for (int i=low; i<low+k; i++)
				compAndSwap(a, i, i+k, dir);
			bitonicMerge(a, low, k, dir);
			bitonicMerge(a, low+k, k, dir);
		}
	}
	
	/* This function first produces a bitonic sequence by recursively
		sorting its two halves in opposite sorting orders, and then
		calls bitonicMerge to make them in the same order */
	public static void bitonicSort(int[] a,int low, int cnt, int dir)
	{
		if (cnt>1)
		{
			int k = cnt/2;
	
			// sort in ascending order since dir here is 1
			bitonicSort(a, low, k, 1);
	
			// sort in descending order since dir here is 0
			bitonicSort(a, low+k, k, 0);
	
			// Will merge whole sequence in ascending order
			// since dir=1.
			bitonicMerge(a,low, cnt, dir);
		}
	}
	
	/* Caller of bitonicSort for sorting the entire array of
	length N in ASCENDING order */
	public static void sort(int[] a, int N, int up)
	{
		bitonicSort(a,0, N, up);
	}
	
	// Driver code
	static void Main()
	{
		int[] a= {3, 7, 4, 8, 6, 2, 1, 5};
		int N = a.Length;
	
		int up = 1; // means sort in ascending order
		sort(a, N, up);
	
		Console.Write("Sorted array: \n");
		for (int i=0; i<N; i++)
			Console.Write(a[i] + " ");
		}
		//This code is contributed by DrRoot_
}
