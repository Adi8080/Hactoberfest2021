#include<bits/stdc++.h>

using namespace std;

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

	int j = 0;
	int i = 0;

	for(i = 0; i < n; i++)
	{
		if(i != j && array[i] < 0)
		{
			swap(array[i],array[j]);
			j++;
		}
	}

	for(int i = 0; i < n; i++)
	{
		cout<<array[i]<<" ";
	}

	return 0;
}