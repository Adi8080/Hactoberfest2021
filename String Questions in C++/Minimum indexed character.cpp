//Given a string S and another string patt. Find the character in patt that is present at the minimum index in S.



#include <bits/stdc++.h>
using namespace std;

//Function for min index character 
class Solution{
    public:
	string printMinIndexChar(string S, string patt)
	{
	   for(char c: S){
	       if(find(patt.begin(), patt.end(), c)!=patt.end()) return string(1,c);
	   } 
	   return string(1, '$');
	}
};


int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string str;
        cin>>str;
        string patt;
        cin >> patt;
        Solution obj;
        cout<<obj.printMinIndexChar(str, patt)<<endl;
    }
    
	return 0;
}  
