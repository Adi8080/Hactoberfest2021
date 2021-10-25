//You are given a string s. You need to reverse the string.


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
		
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	
	return 0;
	
}



//User function Template for 
string reverseWord(string s){
    
    
    for(int i=s.length()-1; i>=0; i--){
        
        cout<<s[i];
        
    }
    
    
}
