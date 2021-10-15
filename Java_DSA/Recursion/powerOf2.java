import java.util.Scanner;

public class PowerOf2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        System.out.println(powerOfTwo(num));
    }

    private static boolean powerOfTwo(int num) {
        if (num == 1) {
            return true;
        }
        if (num % 2 != 0 || num == 0) {
            return false;
        }
        return powerOfTwo(num / 2);
    }
}