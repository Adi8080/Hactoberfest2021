private static ArrayList<Integer> Rabin_Karp(String text, String pattern) {
		ArrayList<Integer> lis = new ArrayList<Integer>();
		int s = pattern.length(),t = text.length();
		long mod = 1000000007,p = 31;
		long p_pow[] = new long[max(s,t)];
		p_pow[0] = 1; 
	    for (int i = 1; i < (int)p_pow.length; i++) 
	        p_pow[i] = (p_pow[i-1] * p) % mod;
	    
	    long dp[] = new long[t+1];
	    for (int i = 0; i < t; i++)
	        dp[i+1] = (dp[i] + (text.charAt(i) - 'a' + 1) * p_pow[i]) % mod;
	     long pattern_Code = 0; 
	    for (int i = 0; i < s; i++) 
	    	pattern_Code = (pattern_Code + (pattern.charAt(i) - 'a' + 1) * p_pow[i]) % mod; 
	    
		for(int i=0; i+s-1<t; i++) {
			long curr_Code = (dp[i+s] + mod - dp[i])%mod;
			if(curr_Code == pattern_Code * p_pow[i] % mod)lis.add(i);
		}
		return lis;
	}
  
  
  
  
  
  // main 
  public static void main(String[] args) {
		String text = sc.next();
		String pattern = sc.next();
		ArrayList<Integer> lis = Rabin_Karp(text,pattern);
		System.out.println(lis);
	}
