#include<bits/stdc++.h>
using namespace std;
bool solve(int arr[],int n){
  int mxReach=0;
  for(int i=0;i<n;i++){
    if(i>mxReach){
      return false;
      }
    mxReach=max(mxReach,i+arr[i]);
    }
  return true;
  }
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
    }
  bool ans=solve(arr,n);
  cout<<ans<<endl;
  return 0;
  }
