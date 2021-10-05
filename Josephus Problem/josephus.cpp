#include <bits/stdc++.h>
using namespace std;

int jos(int n,int k)
{
    if(n==1)
    return 0;

    return (jos(n-1,k)+k)%n;

}



int main()
{
    int n,k;
    cin>>n>>k;

    //circle starting from 0
    cout<<jos(n,k)<<"\n";
    //circle starting from 1
    //cout<<jos(n,k)+1<<"\n";

    return 0;
}