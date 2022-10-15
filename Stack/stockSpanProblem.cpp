#include <bits/stdc++.h>
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

    vector<int> ans ;
    stack<pair<int,int>> st ;
    for(int i =0 ;i<n ;i++)
    {
        if(st.empty())
        {
            ans.push_back(-1) ;
        }else if(st.size()>0 && st.top().first>a[i] )
        {
            ans.push_back(st.top().second) ;
        }else if(st.size()>0 && st.top().first<=a[i])
        {
            while(st.size()>0 && st.top().first<=a[i])
            {
                st.pop() ;
            }
            if(st.size()==0)
            {
                ans.push_back(-1) ;
            }else{
                ans.push_back(st.top().second) ;
            }
        }
        st.push({a[i],i}) ;
    }
    for(int i =0 ;i<n ;i++)
    {
        a[i]=i-ans[i] ;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" " ;
    }cout<<endl ;
    
}