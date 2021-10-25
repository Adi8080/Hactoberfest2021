/*
Bubble Sort is comparison based sorting algorithm. In this algorithm adjacent elements are compared and swapped to make correct sequence. This algorithm is simpler than other algorithms, but it has some drawbacks also. This algorithm is not suitable for large number of data set. It takes much time to solve the sorting tasks.

The complexity of Bubble Sort Technique
Time Complexity: O(n) for best case, O(n2) for average and worst case

Space Complexity: O(1)

Input − A list of unsorted data: 56 98 78 12 30 51
Output − Array after Sorting: 12 30 51 56 78 98

Algorihtm:-

Begin
   for i := 0 to size-1 do
      flag := 0;
      for j:= 0 to size –i – 1 do
         if array[j] > array[j+1] then
            swap array[j] with array[j+1]
            flag := 1
      done
      if flag ≠ 1 then
         break the loop.
   done
End

Example Code:-
*/
#include<iostream>
using namespace std;
void swapping(int &a, int &b) {      //swap the content of a and b
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void bubbleSort(int *array, int size) {
   for(int i = 0; i<size; i++) {
      int swaps = 0;         //flag to detect any swap is there or not
      for(int j = 0; j<size-i-1; j++) {
         if(array[j] > array[j+1]) {       //when the current item is bigger than next
            swapping(array[j], array[j+1]);
            swaps = 1;    //set swap flag
         }
      }
      if(!swaps)
         break;       // No swap in this pass, so array is sorted
   }
}
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];     //create an array with given number of elements
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   bubbleSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
} //above programme works fine don't need to do anything
