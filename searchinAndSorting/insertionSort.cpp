void insertionSort(int *arr, int size)
{
    int i = 1;
    int temp;
    while (i < size)
    {
        temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
                arr[j + 1] = arr[j];
            else
                break;
            j--;
        }
        arr[j + 1] = temp;
        i++
    }
}