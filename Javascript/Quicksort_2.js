function quickSort(arr) {
	if (arr.length < 2) return arr;
	var center = Math.trunc(arr.length / 2),
		pivot = arr[center],
		left = [],
		right = [];
	delete arr[center];
	arr.forEach(function (x) {
		x < pivot ? left.push(x) : right.push(x);
	});
	left = quickSort(left);
	right = quickSort(right);
	return left.concat(pivot).concat(right);
}