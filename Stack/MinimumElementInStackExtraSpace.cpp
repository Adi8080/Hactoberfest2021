#include "bits/stdc++.h"
using namespace std ;

stack<int> s ; //Main Stack
stack<int> ss ; // Supporting Stack

void push(int x)
{
    if(s.empty())
    {
        ss.push(x) ;
    }else if(x<=ss.top())
    {
        ss.push(x) ;
    }
    s.push(x) ;
}

int pop()
{
    if(s.empty())
    return -1 ;

    if(s.top()==ss.top())
    {
        int t = s.top() ;
        s.pop() ;
        ss.pop() ;
        return t ;
    }
        int t = s.top() ;
        s.pop() ;
        return t ;
}

int getMin()
{
    if(s.empty())
    return -1 ;

    return ss.top() ;
}

int main()
{
    push(10) ;
    push(20) ;
    push(15) ;
    cout<<getMin()<<endl ;
    cout<<pop()<<endl ;
    cout<<pop()<<endl ;
    cout<<getMin()<<endl ;
    push(9) ;
    cout<<getMin()<<endl ;
    return 0 ;
}