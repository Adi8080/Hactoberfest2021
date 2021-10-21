#include "bits/stdc++.h"
using namespace std ;

stack<int> st ;
int minEle ;

int getMin()
{
    if(st.size()==0)
    return -1;

    return minEle ;
}

void push(int x)
{
    if(st.empty())
    {
        st.push(x) ;
        minEle = x ;
    }else
    {
        if(x>=minEle)
        {
            st.push(x) ;
        }else if (x<minEle)
        {
            st.push(2*minEle-x) ;
            minEle = x ;
        }
    }
}

void pop()
{
    if(st.empty())
    {
        return ;
    }else 
    {
        if(st.top() > minEle)
        {
            st.pop() ;
        }else if(st.top()<minEle)
        {
            minEle = 2*minEle - st.top() ;
            st.pop() ;
        }
    }
}

int top()
{
    if(st.empty())
    return -1 ;

    if(st.top() >minEle)
    return st.top() ;
    else
    return minEle ;
}


int main()
{

    return 0 ;
}