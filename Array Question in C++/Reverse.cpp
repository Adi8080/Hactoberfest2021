#include<bits/stdc++.h>

using namespace std;

void reverse_r_r(int array[], int start, int end)
{
	while(start <= end)
	{
		int temp = array[start];
		array[start] = array[end];
		array[end] = temp;
		start++;
		end--;
	}
}

// By Reversing Algorithm
void reverse_r(int array[],int d, int n)
{
	reverse_r_r(array,0,d-1);
	reverse_r_r(array,d,n-1);
	reverse_r_r(array,0,n-1);
}

// Brute Force
void reverse(int array[],int n,int d)
{
	for(int i = 0; i < d; i++)
	{
		int temp = array[0];
		int j;
		for(j = 0; j < n-1; j++)
		{
			array[j] = array[j+1];
		}
		array[j] = temp;
	}

	// Printing 
	cout<<"Array after rotation using Brute-Force"<<endl;
	for(int i = 0; i < n; i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;

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
	cin>>d; // no of the times to be reserved

	//reverse(array,n,d);

	reverse_r(array,d,n);

	cout<<"Array after rotation using Reversing Algorithm"<<endl;
	for(int i = 0; i < n; i++)
	{
		cout<<array[i]<<" ";
	}

	return 0;
}