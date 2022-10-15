
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
    int curr=0;

    for(int i=0;i<n;i++){
        curr=0;
        for(int j=i;j<n;j++){
            curr += arr[j];
            cout<<curr<<"\n";
        }


    }
    return 0;
}