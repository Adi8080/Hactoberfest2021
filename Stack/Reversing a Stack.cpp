// Recursion + Stack
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void insert_at_bottom(stack<int> &s, int element)
{
    if(s.empty())
    {
        s.push(element);                     // element that is '9' inserted at bottom  n then jump to last line
        return;
    }
    int top_element = s.top();              // a call stack is started to stack elements as 5 7 1 from stack
    s.pop();
    insert_at_bottom(s, element);           //when stack gets empty the if condition satifies
    s.push(top_element);                    // all elements from top of call stack inserted at bottom of stack 
}                                           // end
void reverse(stack<int> &s)
{
    if(s.empty())
    return;
    int element = s.top() ;
    s.pop();
    reverse(s);                        // we stack 5 7 1 in reverse order -> 1 7 5
    insert_at_bottom(s, element);      // here we send the reversed stack and 1st element '9' that is to be inserted at bottom
}
int main()
{
    stack<int> s;   //9571
    s.push(1);     // last
    s.push(7);
    s.push(5);
    s.push(9);    // top                 
    reverse(s);
    while(!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }                                 // 1759 expected
    cout << endl;
}
