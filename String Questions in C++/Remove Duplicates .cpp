//Given a string without spaces, the task is to remove duplicates from it.


#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
		
	string removeDups(string S) 
	{
	    string result="";
	    int hash[123]={0};
	    for(int i=0; i<S.length(); i++)
	    {
	        if(hash[S[i]]==0){
	            hash[S[i]]=1;
	            result+=S[i];
	            
	        }
	    }
	    return result;
}
};

int main() 
{
   	
   	string s;
   	cin >> s;

   		
   	Solution ob;
   	cout << ob.removeDups(s) << "\n";
   		
   	return 0;
} 
