//Given a string of length N, made up of only uppercase characters 'R' and 'G', where 'R' stands for Red and 'G' stands for Green.
//Find out the minimum number of characters you need to change to make the whole string of the same colour.

#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
       int RedOrGreen(int N,string S) {
           int cntR=0;
           int cntG = 0;
           string str1="R";
           for(int i=0; i<S.size(); i++){
              
               if(S[i]=='R'){
                   cntR= cntR +1;
               }
               if(S[i]=='G'){
                   cntG= cntG +1;
               }
           }
           if(cntR>cntG){
               return cntG;
           }
           else{
               return cntR;
           }
    }
};


int main() {
    
        int N;
        cin>>N;
        string S;
        cin >> S;
        Solution ob;
        cout << ob.RedOrGreen(N,S) << endl;
    
    
}  
