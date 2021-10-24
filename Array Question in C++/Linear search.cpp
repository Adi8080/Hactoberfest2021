#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int n,int target){
  
  for(int i=0;i<n;i++){
    if(arr[i]==target){
      return i;
      }
    }
  return -1;
  }
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
    }
  int target;
  cin>>target;
  int ans=solve(arr,n,target);
  if(ans==-1){
    cout<<"Element not found"<<endl;
    }
  else{
    cout<<"Element found at index "<<ans<<endl;
    }
  return 0;
  }
