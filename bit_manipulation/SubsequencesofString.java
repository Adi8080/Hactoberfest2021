package Bit_Manipulation_Algorithms;

import java.util.*;

public class SubsequencesofString {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        ArrayList<String> ans = new ArrayList<>();
        String s = sc.next();
        int n = s.length();
        sc.close();

        for (int i = 0; i < (1 << n); i++) {
            String temp = findSubsequence(s, i);
            ans.add(temp);
        }
        System.out.println(ans);
    }

    static String findSubsequence(String s, int i) {
        int j = 0;
        String var = "";
        while (i != 0) {
            int temp = i & 1;
            if (temp == 1) {
                var += s.charAt(j);
            }
            j++;
            i = i >> 1;
        }
        return var;
    }
}
