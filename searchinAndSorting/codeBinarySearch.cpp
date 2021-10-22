

void binarySearch(int *arr, int n, int x)
{
    int start = 0;
    int end = n - 1;
    int mid = start;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (input[mid] > val)
        {
            end = mid - 1;
        }
        else if (input[mid] < val)
        {
            start = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}