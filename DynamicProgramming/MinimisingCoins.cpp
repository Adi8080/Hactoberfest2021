/*Consider a money system consisting of n coins. Each coin has a positive integer value. Your task is to produce a sum of money x using the available coins in such a way that the number of coins is minimal.

For example, if the coins are {1,5,7} and the desired sum is 11, an optimal solution is 5+5+1 which requires 3 coins.*/
#include<bits/stdc++.h>
using namespace std;
int comb(int coin[],int sum,int n);
int main(){
    int n,x;
    cin>>n;
    cin>>x;
    int coins[n];
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    cout<<comb(coins,x,n);
    return 0;
}
int comb(int coins[],int sum,int n){
 vector<vector<int> > t(n+1,vector<int>(sum+1));
 for(int i=0;i<n+1;i++)
        for(int j=0;j<sum+1;j++)
        { 
            if(i==0) t[i][j]=INT_MAX-1;
            if(j==0) t[i][j]=0;
        }
        int j=1;
      for(int i=1;j<=sum;j++){
        if(j%coins[0]==0){
            t[i][j]=j/coins[0];
        }
        else
         t[i][j]=INT_MAX-1;
      }  
    for(int i=2;i<n+1;i++)
        for(int j=1;j<sum+1;j++)
        {
             if(coins[i-1]<=j){
                 t[i][j]=min((t[i][j-coins[i-1]])+1,t[i-1][j]);
            }
            else 
            t[i][j]=t[i-1][j];
        }
        if(t[n][sum]>(int) 1e9){
            return -1;
        }
    return t[n][sum];
}