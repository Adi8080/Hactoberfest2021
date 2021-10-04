const swap = require("./helpers");

const selectionSort = (arr) => {
  let minIndex,
    len = arr.length;
  for (let i = 0; i < len; i++) {
    minIndex = i;
    for (let j = i + 1; j < len; j++) {
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }
    swap(arr, i, minIndex);
  }
  return arr;
};

selectionSort([7, 5, 2, 4, 3, 9]); //[2, 3, 4, 5, 7, 9]
selectionSort([9, 7, 5, 4, 3, 1]); //[1, 3, 4, 5, 7, 9]
selectionSort([1, 2, 3, 4, 5, 6]); //[1, 2, 3, 4, 5, 6]
