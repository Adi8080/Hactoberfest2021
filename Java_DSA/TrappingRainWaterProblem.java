import java.util.*;

public class TrappingRainWaterProblem {

  static int trappingWater(int arr[], int n) {
    int left = 0, right = n - 1;
    int maxLeft = 0, maxRight = 0;
    int res = 0;
    while (left < right) {
      if (arr[left] <= arr[right]) {
        if (arr[left] >= maxLeft)
          maxLeft = arr[left];
        else
          res += maxLeft - arr[left];
        left++;
      } else {
        if (arr[right] >= maxRight)
          maxRight = arr[right];
        else
          res += maxRight - arr[right];
        right--;
      }
    }
    return res;
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] arr = new int[n];
    for (int i = 0; i < n; i++) {
      arr[i] = sc.nextInt();
    }
    int ans = trappingWater(arr, n);
    System.out.println(ans);
  }

}
