#include"bits/stdc++.h"
using namespace std ;

stack<int> s ;
stack<int> ss ;

int getMin()
{
    if(ss.size()==0)return 1 ;

    return ss.top() ;
}

void push(int a)
{
    s.push(a) ;
    if(ss.empty() || ss.top()<=a)
    {
        ss.push(a) ;
    }
}

int pop()
{
    if(s.empty())return -1 ;
    int ans =s.top() ;
    s.pop() ;
    if(ans==ss.top())
    {
        ss.pop() ;
    }
    return ans ;
}

int main()
{
    
}

