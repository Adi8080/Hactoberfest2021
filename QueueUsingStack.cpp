#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:

    stack<int> st1, st2;

    //enQueue method costly
    /*void enQueue(int x){
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
        st1.push(x);
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }      
        cout<<x<<" EnQueued"<<endl;
    }

    void deQueue(){
        if(!st1.empty())
        st1.pop();
    }*/

    //deQueue method costly
    void enQueue(int x){
        st1.push(x);
        cout<<"Stack Top: "<<st1.top()<<endl;
    }

    void deQueue(){
        if(st1.empty() && st2.empty()){
            cout<<"stack empty"<<endl;
            return;
        }

        if(st2.empty()){
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
        }
        st2.pop();
    }
};


int main()
{
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.deQueue();

    return 0;
}
