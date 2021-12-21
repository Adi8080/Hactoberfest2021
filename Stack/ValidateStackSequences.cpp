//Problem Link - https://leetcode.com/problems/validate-stack-sequences/

//Solution

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        //------------------------APPROACH 2---------------------------------
        int n = pushed.size(), m = popped.size();
        int i=0, j=0;
        for(int x: pushed){
            pushed[i] = x;
            i++;
            while(i>0 && pushed[i-1]==popped[j]){
                i--;
                j++;
            }
        }
        return i==0;
        
        
        //-----------------------------APPROACH 1-----------------------------------
        stack<int> s;
        int n = pushed.size(), m = popped.size();
        int j=0;
        for(int i=0; i<n; i++){
            s.push(pushed[i]);
            while(!s.empty() && s.top()==popped[j]){
                s.pop();
                j++;
            }
        }
        if(j==n)  //or s.empty()
            return true;
        return false;
    }
};
