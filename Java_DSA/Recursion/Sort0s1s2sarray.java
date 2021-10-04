//sort array in O(n) time complexity and o(1> space complexity

public class Sort0s1s2sarray {

    public static int[] sortarray(int a[]) {

        int low = 0;
        int mid = 0;
        int high = a.length - 1;
        while (mid <= high) {

            if (a[mid] == 0) {
                swap(a, low, mid);
                low++;
                mid++;
            } else if (a[mid] == 1) {
                mid++;
            } else {
                swap(a, mid, high);
                high--;
            }
        }

        return a;
    }

    public static void swap(int[] a, int i, int j) {

        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    public static void main(String[] args) {
        int arr[] = {1, 0, 2, 1, 1, 0, 2, 2};

        int c[] = sortarray(arr);

        for (int val : c) {
            System.out.println(val);
        }
    }

}
