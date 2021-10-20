//Given n denominations d1,d2...dn and a value N.
//Calculate total number of ways of getting sum N using these denominations.
//Different from staircase as here 1 1 2 and 1 2 1 are same unlike staircase problem. 

#include<bits/stdc++.h>
using namespace std;

//Recursive solution
int coin_change(int n,int d[],int numD)
{
    if(n==0)
    return 1;
    if(n<0)
    return 0;
    if(numD==0)
    return 0;

    
    int first = coin_change(n-d[0],d,numD); //Take first denomination
    int second = coin_change(n,d+1,numD-1); //Don't take first denomination

    return first+second;
}

//Recursive with memoization
int coin_change_memo(int n,int d[],int numD,int temp[20][20])
{
    if(n==0)
    return 1;
    if(n<0)
    return 0;
    if(numD==0)
    return 0;

    if(temp[n][numD]>0)
    return temp[n][numD];

    int first = coin_change_memo(n-d[0],d,numD,temp); //Take first denomination
    int second = coin_change_memo(n,d+1,numD-1,temp); //Don't take first denomination

    temp[n][numD]=first+second;
    return first+second;
}


int main()
{
    int n,sum_required;
    
    cin>>n;
    int d[n];
    for(int i=0;i<n;i++)
    cin>>d[i];
    cin>>sum_required;

    int temp[20][20]={0};
    //int d[2]={1,2};
    cout<<coin_change(sum_required,d,n)<<endl;
    cout<<coin_change_memo(sum_required,d,n,temp)<<endl;
    
}
