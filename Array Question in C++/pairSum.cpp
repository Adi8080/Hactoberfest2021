
#include<bits/stdc++.h>

using namespace std;

// 1.  Brute force ... O(n^2)

bool pairSum(int arr[], int n, int k){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] == k){
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
}

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int arr[] = {2,4,7,11,14,16,20,21};
    int k=31;

    cout<<pairSum(arr,8,k)<<endl;;



    return 0;
}



// 2. Using two pointers ... O(n)

bool pairSum(int arr[], int n, int k){
    int low = 0;
    int high = n-1;
    while(low<high){
        if(arr[low]+arr[high] == k){
            cout<<low<<"  "<<high<<"\n";
            return true;
        }
        else if(arr[low]+arr[high] > k){
            high--;
        }
        else {
            low++;
        }
    }

    return false;
}

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int arr[] = {2,4,7,11,14,16,20,21};
    int k=32;

    cout<<pairSum(arr,8,k)<<endl;;



    return 0;
}
