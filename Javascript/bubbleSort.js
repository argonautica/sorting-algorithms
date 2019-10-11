const bubbleSort = (numArray) => {
    let rotated;
    do {
      rotated = false;
      for (let i = 0; i < numArray.length; i++) {
        if (numArray[i] > numArray[i+1]) {
          store = numArray[i];
          numArray[i] = numArray[i+1];
          numArray[i+1] = store;
          rotated = true;
        }
      }
    } while (rotated === true)
    return numArray
  }