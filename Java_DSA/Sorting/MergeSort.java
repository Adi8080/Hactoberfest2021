import java.util.Arrays;

class MergeSort {
    public static void main(String[] args) {
        // Example
        int[] arr = new int[] { 5, 8, 2, 6, 4, 1 };
        System.out.println("Before sort");
        System.out.println(Arrays.toString(arr));
        mergeSort(arr, 0, arr.length - 1);
        System.out.println("After sort");
        System.out.println(Arrays.toString(arr));
    }

    static void mergeSort(int arr[], int l, int r) {
        if (l < r) {
            int m = (l + r) / 2;
            mergeSort(arr, l, m);
            mergeSort(arr, m + 1, r);
            merge(arr, l, m, r);
        }
    }

    private static void merge(int arr[], int l, int m, int r) {
        int s1 = m - l + 1;
        int s2 = r - m;
        int left[] = new int[s1];
        int right[] = new int[s2];
        for (int i = 0; i < s1; ++i)
            left[i] = arr[l + i];
        for (int j = 0; j < s2; ++j)
            right[j] = arr[m + 1 + j];
        int i = 0, j = 0;
        int k = l;

        while (i < s1 && j < s2) {
            if (left[i] <= right[j]) {
                arr[k] = left[i];
                i++;
            } else {
                arr[k] = right[j];
                j++;
            }
            k++;
        }

        while (i < s1)
            arr[k++] = left[i++];

        while (j < s2)
            arr[k++] = right[j++];
    }
}
