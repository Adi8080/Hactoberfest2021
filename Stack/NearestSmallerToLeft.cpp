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
    stack<int> st ;

    for(int i =0 ; i<n ;i++)
    {
        if(st.size()==0)
        {
            ans.push_back(-1) ;
        }else if(st.size()>0 && a[i]>st.top())
        {
            ans.push_back(st.top()) ;
        }else if(st.size()>0 && a[i]<=st.top())
        {
            while(st.size()>0 && a[i]<=st.top())
            {
                st.pop() ;
            }
            if(st.size()==0)
            {
                ans.push_back(-1) ;
            }else{
                ans.push_back(st.top()) ;
            }
        }
        st.push(a[i]) ;
    }

    for(int i =0 ;i<n ;i++)
    {
        cout<<ans[i]<<" " ;
    }cout<<endl ;

}