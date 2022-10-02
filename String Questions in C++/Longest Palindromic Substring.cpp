#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];
bool rec(int i,int j,string &s){
    if(i==j)
        return dp[i][j]=1;
    if(i>j)
        return 1;
    if(dp[i][j]!=-1)
        return dp[i][j];
    if(s[i]==s[j]){
        return dp[i][j]= rec(i+1,j-1,s);
    }
    else
        return dp[i][j]=0;

}
string longestPalindrome(string s) {
    int n=s.size(),i, j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            dp[i][j]=-1;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            if(dp[i][j]==-1)
                dp[i][j]=rec(i,j,s);
     }
     int in=0,ij=0,ans=0;
     for(i=0;i<n;i++){
         for(j=0;j<n;j++){
             if(dp[i][j] && (j-i+1)>ans)
                 in=i,ij=j,ans=(j-i+1);
         }
     }
     return s.substr(in,ij-in+1);
}

int main()
{
    string str;
    cin>>str;
    cout<<longestPalindrome(str)<<"\n";
    return 0;
}

