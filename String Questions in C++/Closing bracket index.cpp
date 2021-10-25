//Given a string with brackets ('[' and ']') and the index of an opening bracket. Find the index of the corresponding closing bracket.
#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
        int closing (string s, int pos)
        {
        	int bCount=1;
            for(int i=pos+1;i<s.length();i++)
        {
            if(s[i]=='[')
            bCount++;
            if(s[i]==']')
            bCount--;
            if(bCount==0)
            return i;
        }
        return 0;
        }
};

int main()
{
    
		string s; cin >> s;
		int pos; cin >> pos;
        Solution ob;
		cout <<ob.closing (s, pos) << '\n';
	
}

