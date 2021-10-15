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
	int ze = 0,on = 0,tw = 0;
	int array[n];

	for(int i = 0; i < n; i++)
	{
		cin>>array[i];
		if(array[i] == 0)
			ze++;
		else if(array[i] == 1)
			on++;
		else
			tw++;
	}

	int i = 0;
	while( i != n)
	{
		if(ze > 0)
		{
			array[i] = 0;
			ze--;
			i++;
			continue;
		}
		else if(on > 0)
		{
			array[i] = 1;
			on--;
			i++;
			continue;
		}
		else
		{
			array[i] = 2;
			i++;
			continue;
		}
	}

	for(int i = 0; i < n; i++)
		cout<<array[i]<<" ";

	cout<<endl;

	return 0;
}