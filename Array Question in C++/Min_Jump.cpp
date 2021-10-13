/*
	Input:
	N = 11 
	arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} 
	Output: 3 
	Explanation: 
	First jump from 1st element to 2nd 
	element with value 3. Now, from here 
	we jump to 5th element with value 9, 
	and from here we will jump to last. 
*/
#include<bits/stdc++.h>

using namespace std;

int dp[100001];

int find(int nums[], int i,int n)
{
    if( i >= n-1) 
        return 0;

    if(dp[i] != -1)
        return dp[i];
        
    int jump = nums[i];
    
    if(jump <= 0)
        return INT_MAX;

    int res = INT_MAX;
    
    for(int j = 1; j <= jump; j++)
    {
        res = 1 + min(res,find(nums,i+j,n));
        dp[i] = res;
    }
    
    return dp[i];
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n; // size of the array
	
	int array[n];
	dp[0] = -1;
	for(int i = 0; i < n; i++)
	{
		dp[i+1] = -1;
		cin>>array[i];
	}

	cout<<find(array,0,n)<<endl;
	return 0;
}