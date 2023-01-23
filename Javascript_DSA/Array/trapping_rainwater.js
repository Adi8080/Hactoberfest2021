//User function Template for javascript

// Function to find the trapped water between the blocks.
function trappingWater(arr, n) {
  //your code here
  let left = [];
  let right = [];
  left[0] = arr[0];
  let count = 0;
  right[n - 1] = arr[n - 1];
  for (let i = 1; i < n; i++) {
    left[i] = Math.max(left[i - 1], arr[i]);
  }
  //console.log(left)
  for (let i = 1; i < n; i++) {
    right[n - 1 - i] = Math.max(right[n - i], arr[n - i - 1]);
  }
  // console.log(right)
  for (let i = 0; i < n; i++) {
    count = count + (Math.min(left[i], right[i]) - arr[i]);
  }
  return count;
}

let arr = [3, 0, 0, 2, 0, 4];
let n = arr.length;
const result = trappingWater(arr, n);
console.log(result);
