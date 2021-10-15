
public class MergeSort {

    public static int[] mergesort(int[] arr, int lo, int hb) {

        if (lo == hb) {
            int[] br = new int[1];
            br[0] = arr[lo];
            return br;
        }

        int mid = (lo + hb) / 2;

        int[] lh = mergesort(arr, lo, mid);
        int[] hh = mergesort(arr, mid + 1, hb);

        int[] mergesorted = mergearrays(lh, hh);

        return mergesorted;

    }

    public static int[] mergearrays(int[] a, int[] b) {

        int i = 0;
        int j = 0;
        int k = 0;

        int merge[] = new int[a.length + b.length];

        while (i < a.length && j < b.length) {

            if (a[i] <= b[j]) {

                merge[k] = a[i];
                i++;
                k++;

            } else {

                merge[k] = b[j];
                j++;
                k++;
            }
        }
        if (i == a.length) {
            while (j < b.length) {
                merge[k] = b[j];
                j++;
                k++;
            }
        }
        if (j == b.length) {
            while (i < a.length) {
                merge[k] = a[i];
                i++;
                k++;
            }
        }

        return merge;
    }

    public static void main(String[] args) {

        int arr[] = {23, 55, 78, 29, 89, 234, 90};

        int c[] = mergesort(arr, 0, arr.length-1);

        for (int val : c) {
            System.out.print(val + " ");
        }
    }

}
