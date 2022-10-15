#include<bits/stdc++.h>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n,m;
	cin>>n>>m; // size of the array
	
	int array[n];
	int array1[m];

	unordered_map<int,int> mp;

	for(int i = 0; i < n; i++)
	{
		cin>>array[i];
		mp[array[i]]++;
	}

	for(int i = 0; i < m; i++)
	{
		cin>>array1[i];
		mp[array1[i]]++;
	}
	
	cout<<"Union of both he arrays are "<<endl;
	for(auto i : mp)
	{
		cout<<i.first<<" ";
	}
	cout<<endl;

	unordered_map<int,int> mp1;
	unordered_map<int,int> mn;

	for(int i = 0; i < n; i++)
	{
		mp1[array[i]]++;
	}

	for(int i = 0; i < m; i++)
	{
		if(mp1.find(array1[i]) != mp1.end())
			mn[array1[i]]++;
	}

	cout<<"Intersaction of both he arrays are "<<endl;
	for(auto i : mn)
	{
		cout<<i.first<<" ";
	}
	cout<<endl;	

	return 0;
}