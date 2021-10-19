#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        int len=str.length();
        int a[len];
        for(int i=0;i<len;i++){
            if(str[i]=='I')a[i]=1;
            else if(str[i]=='V')a[i]=5;
            else if(str[i]=='X')a[i]=10;
            else if(str[i]=='L')a[i]=50;
            else if(str[i]=='C')a[i]=100;
            else if(str[i]=='D')a[i]=500;
            else if(str[i]=='M')a[i]=1000;
        }
        int sum{0};
        for(int i=0;i<len-1;i++){
            if(a[i]>a[i+1])sum+=a[i];
            else if(a[i]<a[i+1])sum-=a[i];
            else sum+=a[i];
        }
        sum+=a[len-1];
        return sum;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.romanToDecimal(s)<<'\n';
    }
    return 0;
}