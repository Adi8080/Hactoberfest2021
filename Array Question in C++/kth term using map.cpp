// find kth term using map
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	cin>>n>>k;
	int arr[n];

	for(int i=0 ; i<n ; i++)
	{
		cin>>arr[i];
	}

	map<int, int> m;
	for(int i=0 ; i<n ; i++)
		m[arr[i]] += 1;

	int fre = 0;
	for(auto itr = m.begin() ; itr!=m.end() ; itr++)
	{
		fre += itr->second;

		if(fre >= k)
		{
			cout<<itr->first<<endl;
			break;
		}
	}
	return 0;
}