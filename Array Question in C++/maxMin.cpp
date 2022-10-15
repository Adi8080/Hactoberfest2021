#include<bits/stdc++.h>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxNo=INT_MIN, minNo=INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]>maxNo){
            maxNo = arr[i];
        }
        // or we can also use max fun.
        // maxNo = max(arr[i], maxNo);

        if(arr[i]<minNo){
            minNo = arr[i];
        }
        // or we can also use min fun.
        // minNo = min(arr[i], minNo);

    }
    cout<<maxNo<<" is maximum\n";
    cout<<minNo<<" is minimun\n";

    
    

    return 0;
}