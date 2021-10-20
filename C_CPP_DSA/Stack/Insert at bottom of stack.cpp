#include<bits/stdc++.h>
using namespace std;
stack<int> s;
void insert(int n)
{
    if(s.empty())
    {
        s.push(n);
        return;
    }
    else
    {
        int x=s.top();
        s.pop();
        insert(n);
        s.push(x);
    }
}
int main()
{
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int n=7;
    insert(n);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
