#include<bits/stdc++.h>

using namespace std;

void max_e(set<int> s,int k_max)
{
    set<int>::iterator itr1 = s.begin();
    advance(itr1, k_max); 

	cout<<"Maximum elements in the array is "<<*itr1<<endl;
}

void min_e(set<int> s,int k_min)
{
	set<int>::iterator itr = s.begin();
    advance(itr, k_min);

    cout<<"Minimum elements in the array is "<<*itr<<endl;
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
	set<int> s;

	for(int i = 0; i < n; i++)
	{
		cin>>array[i];
		s.insert(array[i]);
	}

	int k_min;
	cin>>k_min;
	
	int k_max;
	k_max = n - k_min;

    min_e(s,k_min-1);

	return 0;
}