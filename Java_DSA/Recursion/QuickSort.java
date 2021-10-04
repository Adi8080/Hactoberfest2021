
public class QuickSort {

    public static void quicksort(int arr[], int low, int high) {

        if (low >= high) {
            return;
        }

        int mid = (low + high) / 2;

        int pivot = arr[mid];

        int left = low;
        int right = high;

        while (left <= right) {

            while (arr[left] < pivot) {
                left++;
            }

            while (arr[right] > pivot) {
                right--;
            }

            if (left <= right) {
                int temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;

                left++;
                 right--;
            }
        }

        quicksort(arr, low, right);
        quicksort(arr, left, high);

    }

    public static void main(String[] args) {

        int a[] = {43, 5, 22, 566, 25, 66, 23};

        quicksort(a, 0, a.length - 1);

        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i] + " ");
        }
    }

}
