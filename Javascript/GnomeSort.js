const swapElements = (arr, i, j) => {
  const tmp = arr[i];
  arr[i] = arr[j];
  arr[j] = tmp;
};

const gnomeSort = arr => {
  let pos = 0;
  while (pos < arr.length) {
    if (pos === 0 || arr[pos] >= arr[pos - 1]) {
      pos++;
    } else {
      swapElements(arr, pos, pos - 1);
      pos--;
    }
  }
};
