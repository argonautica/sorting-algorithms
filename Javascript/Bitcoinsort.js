<script>

	/* JavaScript program for Bitonic Sort.
	Note that this program
	works only when size of input is a power of 2. */
	/* The parameter dir indicates the sorting direction,
	ASCENDING or DESCENDING; if (a[i] > a[j]) agrees
	with the direction, then a[i] and a[j] are
	interchanged. */
	function compAndSwap(a, i, j, dir) {
		if ((a[i] > a[j] && dir === 1) ||
		(a[i] < a[j] && dir === 0))
		{
		// Swapping elements
		var temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		}
	}

	/* It recursively sorts a bitonic sequence in ascending
	order, if dir = 1, and in descending order otherwise
	(means dir=0). The sequence to be sorted starts at
	index position low, the parameter cnt is the number
	of elements to be sorted.*/
	function bitonicMerge(a, low, cnt, dir) {
		if (cnt > 1) {
		var k = parseInt(cnt / 2);
		for (var i = low; i < low + k; i++)
		compAndSwap(a, i, i + k, dir);
		bitonicMerge(a, low, k, dir);
		bitonicMerge(a, low + k, k, dir);
		}
	}

	/* This function first produces a bitonic sequence by
	recursively sorting its two halves in opposite sorting
	orders, and then calls bitonicMerge to make them in
	the same order */
	function bitonicSort(a, low, cnt, dir) {
		if (cnt > 1) {
		var k = parseInt(cnt / 2);

		// sort in ascending order since dir here is 1
		bitonicSort(a, low, k, 1);

		// sort in descending order since dir here is 0
		bitonicSort(a, low + k, k, 0);

		// Will merge whole sequence in ascending order
		// since dir=1.
		bitonicMerge(a, low, cnt, dir);
		}
	}

	/*Caller of bitonicSort for sorting the entire array
	of length N in ASCENDING order */
	function sort(a, N, up) {
		bitonicSort(a, 0, N, up);
	}

	/* A utility function to print array of size n */
	function printArray(arr) {
		var n = arr.length;
		for (var i = 0; i < n; ++i)
		document.write(arr[i] + " ");
		document.write("<br>");
	}

	// Driver method
	var a = [3, 7, 4, 8, 6, 2, 1, 5];
	var up = 1;
	sort(a, a.length, up);
	document.write("Sorted array: <br>");
	printArray(a);
	
</script>
