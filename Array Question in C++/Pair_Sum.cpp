#include<bits/stdc++.h>

using namespace std;

// Hash Map Method
bool find_l(int array[], int n, int d)
{
	map<int,int> m;
	for(int i = 0; i < n; i++)
	{
		if(m.find(d - array[i]) != m.end())
			return true;
		m[array[i]]++;	
	}
	return false;
}

// Brute Force
bool find(int array[], int n, int d)
{
	for(int i = 0; i < n; i++)
	{
		int target = d-array[i];
		for(int j = 0; j < n; j++)
		{
			if(array[j] == target && i != j)
				return true;
		}
	}

	return false;
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

	int d;
	cin>>d; // pair sum

	cout<<find_l(array,n,d)<<endl; // Brute 

	return 0;
}