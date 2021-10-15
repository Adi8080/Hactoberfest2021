#include<bits/stdc++.h>

using namespace std;

void duplicate(int arr[],int n)
{
	map<int,int> mp;
	for(int i= 0; i < n; i++)
	{
		mp[arr[i]]++;
	}

	for(auto i : mp)
	{
		cout<<i.first<<endl;
	}
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

	duplicate(array,n);

	return 0;
}