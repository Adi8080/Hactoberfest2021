
public class TimeComplexityCodingBlocks {
    //Merge two sorted arrays

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

        int a[] = {10, 20, 30, 40, 50, 60};
        int b[] = {5, 15, 25, 40, 70, 80, 90, 100};

        int c[] = mergearrays(a, b);

        for (int i = 0; i < c.length; i++) {
            System.out.println(c[i] + " ");
        }

    }

}
