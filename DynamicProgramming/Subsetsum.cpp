#include<bits/stdc++.h>
using namespace std;

bool subsetsum(int arr[],int w,int n){
  bool dp[n+1][w+1];
  // Initialization
  for(int i=0;i<n+1;i++){
    for(int j=0;j<w+1;j++){
      if(i==0)
        dp[i][j]=false;
      if(j==0)
        dp[i][j]=true;
    }
  }
  // choice diagram
  for(int i=1;i<n+1;i++){
    for(int j=1;j<w+1;j++){
      if(arr[i-1]<=j)
        dp[i][j]= dp[i-1][j-arr[i-1]] || dp[i-1][j];
      else
        dp[i][j]=dp[i-1][j];
    }
  }
  return dp[n][w];
}

int main(){
  int n,sum;
  cin>>n>>sum;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  if(subsetsum(arr,sum,n)){
    cout<<"There is some subset of array present having there total element sum equal to asked sum";
  }
  else{
    cout<<" We can not find any subset with given sum";
  }
  return 0;
}
