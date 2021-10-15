#include<bits/stdc++.h>

using namespace std;

int get(int arr[], int n, int k)
{
    sort(arr, arr + n);

    int minEle,maxEle;

    int result = arr[n - 1] - arr[0]; 
                               
    for (int i = 1; i <= n - 1; i++) 
    {
        if (arr[i] >= k && arr[n - 1] >= k) 
        {
            maxEle = max(arr[i - 1] + k,arr[n - 1] - k);
            minEle = min(arr[0] + k, arr[i] - k);
 			result = min(result, maxEle - minEle);
 			cout<<result<<" "<<maxEle<<" "<<minEle<<endl;
        }
    }
        
    return result;
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

	int k;
	cin>>k;

	cout<<"Here is the minimum of the maximum difference "<<get(array,n,k)<<endl;
	return 0;
}