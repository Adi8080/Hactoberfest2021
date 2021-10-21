#include<bits/stdc++.h>
using namespace std;

int trapping_rain_water(int a[], int n)
{
    int total = 0;
    for(int i = 0;i<n;i++)
    {
        int left = a[i];
        for(int j=0;j<i;j++)
            left = max(left,a[j]);
        int right = a[i];
        for(int j=i;j<n;j++)
            right = max(right,a[j]);
        total = total + min(left,right) - a[i];

    }
    return total;

}
int efficient_trapping(int a[], int n)
{
    //efficient calculation
    int total_e = 0;
    int left[n],right[n];
    left[0] = a[0];
    for(int i=1;i<n;i++)
        left[i] = max(left[i - 1],a[i]);
    right[n - 1] = a[n - 1];
    for(int i=n-2;i>=0;i--)
        right[i] = max(right[i + 1],a[i]);
    for(int i=0;i<n;i++)
        total_e = total_e + min(left[i],right[i]) - a[i];
    return total_e;
}

int main()
{
    int n ;
    cout<<"enter size of array : ";
    cin>>n;
    int a[n];
    cout<<endl;
    cout<<"enter the elemnts heights : " ;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\ntotal rain water that can be stored is : "<<trapping_rain_water(a,n)<<endl;
    cout<<"\ntotal rain water that can be stored in a efficient way is : "<<efficient_trapping(a, n)<<endl;

    return 0;
}
