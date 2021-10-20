#include <iostream>
using namespace std;

// Insertion sort function
void Insertion_Sort(int arr[], int n)
{
    int i, j, cur;
    // Iterate thorugh array
    for (i = 1; i < n; i++)
    {
        // Store current element in cur
        cur = arr[i];
        
        // Iterating variable for finding
        // correct position of current element
        j = i - 1;

        // Iterate on behind the current element
        // Until we reach start of array or arr[j]>cur
        while (j >= 0 && arr[j] > cur)
        {
            // Each step assign arr[j] to arr[j+1]
            // i.e. move element ahead
            arr[j + 1] = arr[j];
            
            // Decrement j
            j--;
        }

        // We found correct position for cur
        // i.e j+1 so assign that to cur
        arr[j + 1] = cur;
    }
}

// Display array function 
void Display_Array(int arr[], int n)
{
    cout<<"Displaying Array...    : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Main Function
int main()
{
    // Sample array we can take input from user also
    int arr[] = {6, 2, 3, 5, 9, 8, 1};

    // Number of elements
    int n = sizeof(arr) / sizeof(arr[0]);

    // Displaying array before sorting
    Display_Array(arr, n);

    // Calling function insertion sort
    Insertion_Sort(arr, n);

    // Displaying array after sorting
    Display_Array(arr, n);

    return 0;
}