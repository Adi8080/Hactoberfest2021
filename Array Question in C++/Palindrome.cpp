#include<bits/stdc++.h>

using namespace std;

int find(int array[],int n)
{
	int start = 0;
	int end = n-1;
	while(start < end)
	{
		if(array[start] != array[end])
			return 0;
		start++;
		end--;
	}

	return 1;
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

	for(int i = 0; i < n; i++)
	{
		cin>>array[i];
	}

	cout<<find(array,n)<<endl; // Brute 

	return 0;
}