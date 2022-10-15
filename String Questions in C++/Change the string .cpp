//Given a string S, the task is to change the complete string to Uppercase or Lowercase depending upon the case for the first character.


#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    string modify (string s)
    {
        int i=0;
       
            if(isupper(s[i])){
                for(int i=0; i<s.size(); i++){
                    s[i]=toupper(s[i]);
                    cout<<s[i];
                }
            }
            else{
                for(int i=0; i<s.size(); i++){
                    s[i]=tolower(s[i]);
                    cout<<s[i];
                }
            }
       
    }
    
};


int main()
{
    
	string s;
	cin >> s;
	Solution ob;
	cout << ob.modify (s) << endl;
	
}  
