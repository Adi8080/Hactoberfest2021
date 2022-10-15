//Given a string S, the task is to create a string with the first letter of every word in the string.
 
 
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    cout<<S[0];
	    for(int i=0; i<S.size(); i++){
	        if(S[i]==' '){
	            cout<<S[i+1];
	        }
	    }
	}
};


int main() 
{
   		string s;
   		getline(cin, s);

   	
        Solution ob;
   		cout << ob.firstAlphabet(s) << "\n";
   	

    return 0;
} 
  
