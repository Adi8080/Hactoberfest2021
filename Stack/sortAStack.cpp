#include "bits/stdc++.h"
using namespace std ;

void insertInStack(stack<int> &st , int t)
{
    if(st.empty() || st.top()<=t)
    {
        st.push(t) ;
        return ;
    }
    int temp = st.top() ;
    st.pop() ;
    insertInStack(st,t) ;
    st.push(temp) ;
}

void sortStack(stack<int> &st)
{
    if(st.empty())
    {
        return ;
    }
    int t = st.top() ;
    st.pop() ;
    sortStack(st) ;
    insertInStack(st,t) ;
}

int main()
{
    
    return 0 ;
}