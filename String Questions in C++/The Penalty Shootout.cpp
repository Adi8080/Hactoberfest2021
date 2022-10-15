/* Given a string S contains 0's, 1's, and 2's, the task is to find the number of goals on the penalty.

 '1' stands for "goal".
 '0' stands for "no goal".
 '2' stands for a foul which gives a penalty. */


#include <bits/stdc++.h>
using namespace std;


class Solution{
public:	
	
	int penaltyScore(string S)
	{
	    int cnt=0;
	    for(int i=0; i<S.size(); i++){
	        if(S[i]=='2'){
	            if(S[i+1]=='1'){
	                cnt=cnt+1;
	            }
	        }
	    }
	    return cnt;
	}
};



int main() 
{
    string S;
   	cin >> S;

   	Solution ob;

   	cout << ob.penaltyScore(S) << "\n";
   	

    return 0;
} 
