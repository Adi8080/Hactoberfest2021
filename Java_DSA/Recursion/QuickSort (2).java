
import java.util.*;
public class Main {

    public static void quicksort(int arr[], int low, int high) {

        if (low >= high) {
            return;
        }

        int left = low;
        int right = high;
        //partioning logic
 
        int mid = (low + high) / 2;
            int pivot = arr[mid];
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
        //recursive callsF

        quicksort(arr, low, right);//left
        quicksort(arr, left, high);//right
    }

    public static void main(String args[]) {

        Scanner scan = new Scanner(System.in);

        int N = scan.nextInt();

        int arr[] = new int[N];

        for (int i = 0; i < N; i++) {
            arr[i] = scan.nextInt();
        }

        quicksort(arr, 0,arr.length - 1);

        for (int i = 0; i < N; i++) {
            System.out.println(arr[i] +" ");
        }
    }
}
