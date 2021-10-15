#include<iostream>
using namespace std;

//getbit is used to find bit(0,1) at given position
int getbit(int n,int pos){
    return ((n & (1<<pos))!=0);
}
/*Setbit is used to add 1 at given position*/
int setbit(int n,int pos){
    return (n|(1<<pos));
}
//Unsetbit is used to add 0 at given position
int unsetbit(int n,int pos){
    return (n|(0<<pos));
}
//Clear bit is used to add 0 in place of 1 at given position
int clearbit(int n,int pos){
    int mask=~(1<<pos);
    return (n & mask);
}
//Update bit at a position means 0 to 1 or 1 to 0
int updatebit(int n,int pos,int value){
    int mask=~(1<<pos);
    n=n&mask;
    return (n|(value<<pos));
}
int main(){
    cout<<getbit(5,2)<<endl;
    cout<<setbit(5,1)<<endl;
    cout<<unsetbit(5,1)<<endl;
    cout<<clearbit(5,2)<<endl;
    cout<<updatebit(5,1,1)<<endl;
}
