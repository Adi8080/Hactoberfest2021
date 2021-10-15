const swap = require("./helpers");

const insertionSort = (arr) => {
  const len = arr.length;
  for (let i = 1; i < len; i++) {
    for (let j = i - 1; j > -1; j--) {
      if (arr[j + 1] < arr[j]) {
        swap(arr, j + 1, j);
      }
    }
  }

  return arr;
};

insertionSort([7, 5, 2, 4, 3, 9]); //[2, 3, 4, 5, 7, 9]
insertionSort([9, 7, 5, 4, 3, 1]); //[1, 3, 4, 5, 7, 9]
insertionSort([1, 2, 3, 4, 5, 6]); //[1, 2, 3, 4, 5, 6]
