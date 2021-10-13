//find a unique element in a array where all numbers except one,are present twice

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,4,1,2};
    int unique=0;
    for(int i=0;i<5;i++){
        unique=unique^arr[i];
    }
    cout<<unique;
}
