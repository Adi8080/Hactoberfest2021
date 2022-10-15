//Given a string S. The task is to convert characters of string to lowercase.

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string toLower(string S) {
        for(int i=0; S[i]; i++){
           if(S[i] >=65 && S[i] <= 90)
              S[i] +=32; 
           
       }
       return S;
   }
    
};


int main() {
    
        string S;
        cin >> S;
        Solution ob;
        cout << ob.toLower(S) << endl;
    
    return 0;
}
  
