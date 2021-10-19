
#include<bits/stdc++.h>

using namespace std;


// 1. Brute force method.. O(n^3)

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
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum = 0;
            for(int k=i;k<=j;k++){
                sum += arr[k];
                // cout<<arr[k]<<" ";
            }
            maxSum = max(maxSum, sum);
            // cout<<endl;
        }
    }

    cout<<maxSum<<"\n";


    return 0;
}


// 2. Cumulative sum method.. O(n^2)


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

    int currSum[n+1];
    currSum[0] = 0;
    for(int i=1;i<=n;i++){
        currSum[i] = currSum[i-1] + arr[i-1];
    }
    int maxSum = INT_MIN;
    for(int i=1;i<=n;i++){
        int sum = 0;
        for(int j=0;j<i;j++){
            sum = currSum[i] - currSum[j];
            maxSum = max(sum,maxSum);
        }
    }

    cout<<maxSum<<endl;

    return 0;
}
