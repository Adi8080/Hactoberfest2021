#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    cin>>n ;
    int a[n] ;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i] ;
    }
    int lm[n] ;
    int mx =a[0] ;
    for(int i =0 ;i<n ;i++)
    {
        mx=max(mx,a[i]) ;
        lm[i] =mx ;
    }
    int rm[n] ;
    int mr =a[0] ;
    for(int i =n-1  ;i>=0 ;i--)
    {
        mr=max(mr,a[i]) ;
        rm[i]=mr; 
    }
    int s =0 ;
    for(int i =0 ;i<n ;i++)
    {
        s=s+min(lm[i],rm[i])-a[i] ;
    }
    cout<<s<<endl ;
    
}