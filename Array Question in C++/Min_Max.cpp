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

	int min_e = INT_MAX,max_e = INT_MIN;

	min_e = array[0];
	max_e = array[0];

	if(n == 1)
	{		
		cout<<"Minimum elements in the array is "<<min_e<<endl;
		cout<<"Maximum elements in the array is "<<max_e<<endl;
	}
	else
	{
		for(int i = 1; i < n; i++)
		{
			min_e = min(min_e,array[i]);
			max_e = max(max_e,array[i]);
		}
		cout<<"Minimum elements in the array is "<<min_e<<endl;
		cout<<"Maximum elements in the array is "<<max_e<<endl;
	}

	return 0;
}