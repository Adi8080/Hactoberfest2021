const swap = require("./helpers");

const bubbleSort = (arr) => {
  const len = arr.length;
  for (let i = len - 1; i >= 0; i--) {
    for (let j = 1; j <= i; j++) {
      if (arr[j - 1] > arr[j]) {
        swap(arr, j - 1, j);
      }
    }
  }
  return arr;
};

bubbleSort([7, 5, 2, 4, 3, 9]); // returns [2, 3, 4, 5, 7, 9]
bubbleSort([9, 7, 5, 4, 3, 1]); // returns [1, 3, 4, 5, 7, 9]
bubbleSort([1, 2, 3, 4, 5, 6]); // returns [1, 2, 3, 4, 5, 6]
