package Bit_Manipulation_Algorithms;

public class BinaryToDecimal {

    public static void main(String args[]) {
        int n = 10101;
        int base = 1;
        int ans = 0;

        while (n != 0) {
            int rem = n & 1;
            ans += rem * base;
            base = base << 1;
            n = n / 10;
        }
        System.out.println(ans);
    }
}
