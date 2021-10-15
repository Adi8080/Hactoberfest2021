import java.util.Scanner;

public class PowerOf4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        System.out.println(powerOfFour(num));
    }

    private static boolean powerOfFour(int num) {
        if (num == 1) {
            return true;
        }
        if (num % 4 != 0 || num == 0) {
            return false;
        }
        return powerOfFour(num / 4);
    }
}