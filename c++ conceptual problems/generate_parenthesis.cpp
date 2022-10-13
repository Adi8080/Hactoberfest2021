// https://leetcode.com/problems/generate-parentheses/

class Solution {
public:
    
   
    
    void combinations(vector<string> &ans,int n,string &temp,int stacker){
        
        if( n == 0 ){
            int save = stacker;
            while(stacker > 0){
                temp.push_back(')');
                stacker--;
            }
            ans.push_back(temp);
            while(stacker != save){
                temp.pop_back();
                stacker++;
            }
            return;
        }
        
        if( stacker == 0 and n > 0){
            temp.push_back('(');
            combinations(ans,n-1,temp,stacker+1);
            temp.pop_back();
        }
        
        if( stacker > 0 and n > 0){
            
             // can further increase

            temp.push_back('(');
            combinations(ans,n-1,temp,stacker+1);
            // can reduce
            temp.pop_back();
            if(stacker > 0){
            temp.push_back(')');
            combinations(ans,n,temp,stacker-1);
            temp.pop_back();
            }
           return;
        }
        
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> par;
        string temp;
        combinations(par,n,temp,0);
        
        return par;
       
    }
};