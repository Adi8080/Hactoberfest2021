#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int arr[] = {0, 1, 7, 4, 2};
    int n = 5;
    selectionsort(arr, n);
    printarr(arr, n);
    return 0;
}
void printarr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d ", arr[i]);
    }
}
void selectionsort(int *arr, int n)
{  
    int indexofmin, temp;
    for (int i = 0; i < n - 1; i++)
    {
        indexofmin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[indexofmin])
            {
                indexofmin = j;
            }
        }temp = arr[i];
            arr[i] = arr[indexofmin];
            arr[indexofmin] = temp;
    }
}
