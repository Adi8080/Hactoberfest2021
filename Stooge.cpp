#include<bits/stdc++.h>
#define c(o) cout<<x<<endl
#define loop(i,m,n) for(ll i=m;i<n;i++)
#define ll long long
#define nl cout<<endl
#define countDig(n) floor(log10(n))+1
using namespace std;


void stooge_sort(int arr[],int start,int end){

if(arr[start]>arr[end]){
swap(arr[start],arr[end]);
}

if((end-start)==2){
    if(arr[start+1]>arr[end]){
swap(arr[start+1],arr[end]);
}
return;
    }
int x1=2*((end-start)/3)+start;
int x2=((end-start)/3)+start;
stooge_sort(arr,start,x1);
stooge_sort(arr,x2,end);
stooge_sort(arr,start,x1);

}
     int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;
int  a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

stooge_sort(a,0,n-1);

for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}cout<<endl;
return 0;
}
