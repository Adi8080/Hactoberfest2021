const swap = (arr, a, b) => {
  [arr[a], arr[b]] = [arr[b], arr[a]];
};

module.exports = swap;
