//Selection Sorting
#include<iostream>
using namespace std;
void selection_sort(int*a,int n)
{
	int i,j,min;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		swap(a[min],a[i]);
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int n;
	cout<<"Enter the number of element of array:\n";
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Sorted array is\n";
	selection_sort(a,n);
	return 0;
}
