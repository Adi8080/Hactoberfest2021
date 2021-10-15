class Solution {
    public boolean isPal(String s){
        int len = s.length();
        if(len == 1){
            return true;
        }
        for(int i = 0 ; i< len/2 ; i++){
            if(s.charAt(i)!=s.charAt(len-1-i))
                return false;
        }
        return true;
    }
    public String longestPalindrome(String s) {
        int len =s.length();
        
        String ans = s.substring(0,1);
        int lenans = 1;
        if(len==0 || len ==1){
            return s;
        }
        
        //generating all substrings
        for(int i = 1; i<= len ;i++){//length of window 
            for(int j = 0 ; i+j <= len ; j++){//offset of window
                
                String str = s.substring(j,j+i);        
                //System.out.println(str);
                
                //checking for pallindrome
                if(isPal(str)){
                        ans = str; 
                        lenans = i;
                        break;
                }
                
            }
        }
        return ans;
    }
}
