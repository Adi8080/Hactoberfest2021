// https://leetcode.com/problems/distinct-subsequences/

class Solution {
public:
    
    int dp[1001][1001];
    
    int helper(string &s, string &t, int length1, int length2, int i, int j){
        // base case
        
        if( j == length2){
            return 1;
        }
        
        if(i == length1){
            return 0;
        }
        
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        
        // recursive case
        
        int opt1= 0;
        if(s[i] == t[j]){
            // we can include
            
            opt1 = helper(s,t,length1,length2,i+1,j+1);
        }
        
        int opt2 = helper(s,t,length1,length2,i+1,j);
        
        return dp[i][j] =  opt1 + opt2;
    }
    
    
    int numDistinct(string s, string t) {
        for(int i=0 ;i <1001; i++){
            for(int j = 0; j < 1001 ; j++){
                dp[i][j] = -1;
            }
        }
        return helper(s,t,s.length(),t.length(),0,0);
    }
};