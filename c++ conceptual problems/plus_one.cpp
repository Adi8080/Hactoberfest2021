// https://leetcode.com/problems/plus-one/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int end=digits.size()-1;
        int &l_value=digits[end];
        l_value++;
        
        cout<<l_value;
        
        int carry_back=0;
        for(int i=end;i>=0;i--){
            digits[i]+=carry_back;
            carry_back=0;
            if(digits[i]==10){
                digits[i]=0;
                carry_back=1;
            }
        }
        if(carry_back==1){
            digits.insert(digits.begin(),1);
        }
        return digits;
        
    }
};