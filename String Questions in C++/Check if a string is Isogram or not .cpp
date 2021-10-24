//Given a string S of lowercase alphabets, check if it is isogram or not. An Isogram is a string in which no letter occurs more than once.



#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        for(char i:s){
            if(count(s.begin(), s.end(), i)>1) return 0;
            
        }
        return 1;
    }
};



int main()
 {
    
        
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.isIsogram(s)<<endl;
        
    
	return 0;
}  
