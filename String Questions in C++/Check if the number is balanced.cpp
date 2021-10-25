/* Given an integer N which has odd number of digits, find whether the given number is a balanced or not.
An odd digit number is called a balanced number if the sum of all digits to the left of the middle digit and 
the sum of all digits to the right of the middle digit is equal. */


#include <bits/stdc++.h>
using namespace std;
 
class Solution{
public:	
	bool balancedNumber(string N)
	{
	    int n=N.size();
	    //int a[p];
	    int sum1=0, sum2=0;
	    for(int i=0; i<n/2; i++){
	        sum1 += N[i];
         sum2 += N[n-i-1];
	    }
	    if(sum1==sum2){
            return true;
	}
	return false;
	}
};


int main(){
   
        string N;
        cin>>N;
        Solution ob;
        cout<<ob.balancedNumber(N)<<endl;
    
    return 0;
}
  // } Driver Code Ends
