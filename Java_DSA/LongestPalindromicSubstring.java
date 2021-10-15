/**
Given a string s, return the longest palindromic substring in s.

 

Example 1:

Input: s = "babad"
Output: "bab"
Note: "aba" is also a valid answer.
Example 2:

Input: s = "cbbd"
Output: "bb"
**/

class Solution {
    public String longestPalindrome(String s) {
        int len = s.length();
        boolean dp[][] = new boolean[len][len];
        int max = 0, start = 0;
        for(int i = 0 ; i < len ; i++) {
            dp[i][i] = true;
            max = 1;
        }
        
        for(int i = 0 ; i < len - 1 ; i++) {
            if(s.charAt(i) == s.charAt(i+1)) {
                start = i;
                dp[i][i+1] = true;
                dp[i+1][i] = true;
                max = 2;
            }
                
        }
        
        for(int k = 3 ; k <= len ; k++) {
            
            for(int i = 0 ; i < len - k + 1 ; i++) {
                int end = i + k - 1;
                if(s.charAt(i) == s.charAt(end) && dp[i+1][end-1]) {
                    if(end - i + 1 > max) {
                        max = end - i + 1;
                        start = i;
                    }
                    dp[i][end] = true;
                }
            }
        }
        return s.length() > 0 ? s.substring(start, start + max) : s;
    }
}
