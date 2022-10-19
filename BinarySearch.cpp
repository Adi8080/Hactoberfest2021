// Binary Search in C++
#include <iostream>
using namespace std;

int binarySearch(int arr[], int x, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;


    if (arr[mid] == x)
      return mid;

    // Search the left half
    if (arr[mid] > x)
      return binarySearch(arr, x, low, mid - 1);

    return binarySearch(arr, x, mid + 1, high);
  }

  return -1;
}

int main(void) {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int x = 4;
  int n = sizeof(array) / sizeof(array[0]);
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
}
