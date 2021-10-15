/*
  Problem Description

You are given a string A.

An operation on the string is defined as follows:

Remove the first occurrence of same consecutive characters. eg for a string "abbcd", the first occurrence of same consecutive characters is "bb".

Therefore the string after this operation will be "acd".

Keep performing this operation on the string until there are no more occurrences of same consecutive characters and return the final string.
*/


string Solution::solve(string A) {
    stack<char> st;
    char ch,tp;
    for(int i=0;i<A.size();i++)
    {
        if(!st.empty()){
            ch=A[i];
            tp=st.top();
            if(ch==tp) st.pop();
            else st.push(A[i]);
        }
        else {
            st.push(A[i]);
        }
    }
    string out,ans;
    while(!st.empty()){
        out.push_back(st.top());
        st.pop();
    }
    for(int i=out.size()-1;i>=0;i--){
        ans+=out[i];
    }
    
 return ans;   
}
