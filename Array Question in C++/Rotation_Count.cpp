#include<bits/stdc++.h>

using namespace std;

int find(int array[],int n)
{
	int temp = array[0];
	for(int i = 0; i < n; i++)
	{
		if(array[i] < temp)
			return i+1;
	}

	return 0;
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